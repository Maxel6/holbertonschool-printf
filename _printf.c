#include "main.h"

int _strlen(char *count)
{
  int i = 0;
  while (count[i])
  {
    i++;
  }
  return (i);
}

int print_c(va_list c)
{
  int a = va_arg(c, int);
  return (write(STDOUT_FILENO, &a, sizeof(char)));
}

int print_s(va_list s)
{
  char *str = va_arg(s, char*);
  return (write(STDOUT_FILENO, str, sizeof(char)* _strlen(str)));
}

int(*check_type(char c, va_list list))
{
  int i = 0;
  
  
  check_t type[] = {
  {'s', print_s}, 
  {'c', print_c}, 
  {0, NULL}
  };
  
  while (type[i].arg)
  {
    if (c == type[i].arg)
    {
      type[i].func(list);
    }
    i++;
  }
  return 0;
}

int _printf(const char *format, ...)
{
  int i = 0;
  va_list arg;

  va_start(arg, format);
  
  while (format[i] != '%')
  {
  /*  write(STDOUT_FILENO, format, sizeof(char) * _strlen(format - 2));
   */ i++;
  }
  
  check_type(format[i + 1], arg);
  va_end(arg);
  return(0);
}

int main(void)
{
  char *a = "abcdef";
  _printf("%s", a);
  return (0);
}
