# NAME

**_printf** - print formatted output

# SYNOPSIS

`int _printf(const char *format, ...);` 

# DESCRIPTION

`_printf` is a function that produces formatted output according to a format string, which is specified by the `format` parameter. The format string can contain conversion specifications, which are introduced by the `%` character and specify how the subsequent arguments should be converted for output.

`_printf` writes the output to the standard output stream (`stdout`). If an error occurs, the function returns a negative value.

The following conversion specifications are supported:

Conversion

Output format

`%c` - Single character

`%s` - String of characters

`%d` - Signed decimal integer

`%i` - Unsigned decimal integer

`%%` - Literal `%` character

# RETURN VALUE

Upon successful completion, `_printf` returns the number of characters printed, excluding the null byte at the end of the string. If an error occurs, the function returns a negative value.

# EXAMPLES

```
#include "main.h"

int main(void)
{
    int n;

    n = _printf("Hello, %s!\n", "world");
    _printf("Printed %d characters\n", n);

    return (0);
}
```
This program produces the following output:

```
Hello, world!
Printed 14 characters
```
# AUTHORS

Written by [Axel Malka](https://github.com/Maxel6) and [Simon Descombes](https://github.com/SimonDesc).
.
