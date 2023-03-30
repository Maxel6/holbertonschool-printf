# _printf

_printf un projet réalisé par deux développeurs pour reproduire le fonctionnement de la commande printf en C. Ce projet a été réalisé dans un but éducatif pour comprendre et maîtriser les concepts de la programmation en langage C.

## Table des matières

-   [Présentation du projet](#pr%C3%A9sentation-du-projet)
-   [Fonctionnalités](#fonctionnalit%C3%A9s)
-   [Installation](#installation)
-   [Utilisation](#utilisation)
-   [Contributeurs](#contributeurs)
-   [License](#license)

## Présentation du projet

Le projet _printf se base sur la fonction printf de la bibliothèque standard C. Il permet de formater et d'afficher des données à l'écran. Le code source est composé des fichiers suivants :

-   main.h : Le fichier d'en-tête contenant les prototypes des fonctions et les structures utilisées.
-   get_func.c : Contient la fonction de récupération de la fonction d'affichage correspondante au format spécifié.
-   helper.c : Contient des fonctions d'aide pour le traitement des chaînes et des nombres.
-   print_funct.c : Contient les fonctions d'affichage pour chaque format pris en charge.

## Fonctionnalités

_printf prend en charge les spécificateurs de format suivants :

-   %c : caractère
-   %s : chaîne de caractères
-   %d ou %i : entier signé en base 10
-   %% : pour afficher un caractère '%'

## Installation

1.  Clonez ce dépôt sur votre machine locale :

`git clone https://github.com/Maxel6/holbertonschool-printf.git` 

2.  Compilez les fichiers sources avec la commande suivante :

`gcc -Wall -Werror -Wextra -pedantic *.c -o _printf` 

## Utilisation

Incluez le fichier d'en-tête `main.h` dans votre projet et utilisez la fonction `_printf` de la même manière que vous utiliseriez la fonction `printf` de la bibliothèque standard C.

Voici un exemple d'utilisation de _printf :
``#include "main.h"``
``int main(void)``
``{``
 ``_printf("Bonjour, %s !\n", "Holberton");``
 ``_printf("J'ai %d pommes et %i poires.\n", 5, 7);``
 ``_printf("Voici un caractère : %c\n", 'A');``
 ``return (0);``
 ``}``

## Contributeurs

Ce projet a été réalisé par [Axel Malka](https://github.com/https://github.com/Maxel6) et [Simon Descombes](https://github.com/SimonDesc).

