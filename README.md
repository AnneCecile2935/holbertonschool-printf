# holbertonschool-printf
<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTkOsDLXeCr-IfKDnkeycWiqx5Uc_F5fDugNg&s" alt="Logo Holberton" width="100"/>

# \u1F3AF C - printf
** Cette fonction produit une sortie selon le format rencontré.
Notre fonction _printf, engloble toutes les fonctions pour traiter chaque cas de format rencontré (si la valeur donnée est un entier, une chaîne de caractère, un caractère, etc...)**

## \u1F4BB Commande qui permet la compilation :
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
* gcc : est utilisé pour compiler notre code
* Wall - Wextra - Werror -pedantic -std=gnu89 : Le code respecte le standard C89 et tous les avertissements lors de la compilation sont activés (si toutes les erreurs ne sont pas corrigées, alors la compilation ne fonctionnera pas)
* Wno-format *.c : on compile tous les fichiers qui se finissent par .c (cela évite de mettre tous les fichiers un par un dans notre gcc)

Après la compilation, un fichier a.out est créé. Et pour avoir notre/nos valeurs de retour, il faudra l'exécuter sur le terminal via la commande ./a.out

 ## \u26A0 Exigences :
- éditeurs autorisés: vi, vim, emacs
- Tous les fichiers sont compilés sur Ubuntu 20.04 LTS
- Le code utilise le style Betty
- Notre structure, ainsi que les prototypes de toutes les fonctions sont inclus dans le main.h
- aucune utilisation de la commande switch et de printf (excepté dans l'exemple du main.c)

## \u1F4E6 Installation :
Sur Linux et macOS, utiliser directement un terminal ou sur windows, utiliser PowerShell et insérer ce code :

git clone https://github.com/AnneCecile2935/holbertonschool-printf.git/utilisateur

## Flowchart :
```mermaid
graph TD;

    A["Start"] --> B["_printf"]
    B -- format(arg) --> Z[va_list arg  va_start arg, format]
    Z --> C{"if format NULL?"}
    C -- NON --> D{"if format %?"}
    C -- OUI --> F{"return -1"}
    D -- OUI --> E{"if %specifier?"}
    X["📌 *Structure tableau associe spécifiers à fonction"] -.-> E
    D -- NON --> Q["_printf"]
    E --> G["c"] & H["s"] & I["i"] & J["d"] & K["%"]
    G --> L["_print_char*"]
    H --> M["_print_strings*"]
    I --> N["_print_int*"]
    J --> O["_print_int*"]
    K --> P["_print_pourcentage*"]
    L --> Q
    M --> Q
    N --> Q
    O --> Q
    P --> Q
Q --> R[va_end]
R --> S[return count]
    style X stroke-width:2px,stroke-dasharray: 2
```

### \u1F4C1 Contenu du repo :

| Fichiers               | Description |
|------------------------|------------------------------------------------------------------------------------------------------------------------|
| _putchar.c             | fonction qui permet d'afficher un caractère                                                                          |
|main.h                |fichier header qui contient les prototypes de fonctions et la structure relieur pour les spécificateurs|
|_printf.c              |fichier source, avec l'appel de toutes les fonctions spécificateurs et retourne une valeur suivant les conditions respectées|
|function_char.c |       fichier source, qui contient une fonction pour afficher un caractère|
|function_integer.c |fichier source, qui contient une fonction pour afficher un entier + ou - et la longueur d'une chaîne de caractère en nombre|
|function_pourcentage.c|fichier source, qui contient une fonction pour afficher un pourcentage|
|function_strings.c |fichier source, qui contient une fonction pour afficher une chaîne de caractère|
|a.out |fichier compilé qui contient le résultat de notre code|
|main.c |fichier source, qui sert d'exemple pour montrer que le résultat entre la commande printf et notre fonction _printf ont le même retour|
|man_3_printf| Manuel de notre fonction _printf|
|README.md| Explication et installation de la fonction|

#### \u1F4A1 Comment accéder à la man page (via une commande d'exécution) :

	man ./man_3_printf

#### Exemples de sortie :
_printf("Negative:[%d]\n", -762534); :arrow_right: -762534

_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n'); :arrow_right: With some more args: You know nothing, Jon snow.

_printf("Percent:[%%]\n"); :arrow_right: %

thought = _printf("Hello Samourai\n"); :arrow_right: Hello Samourai

_printf("Length:%d\n", thought); :arrow_right: Lenght:15


#### \u1F4A5 Failles mémoire détectés ?
On détecte une fuite de mémoire avec l'utilisation de Valgrind, un outil notamment utile pour mettre en évidence des potentiels fuite de mémoire.
	- on compile avec gcc.
	- Valgrind ./a.out ! = total heap usage : allocs, frees, 1,024 bytes allocated
	Après l'utilisation de Valgrind l'on peut voir que nous n'avons pas de fuite mémoire car notre allocation mémoire statique retiens bien une valeur retour.

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> <a href="https://git-scm.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/> </a> </p>
