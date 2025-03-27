# holbertonschool-printf
# C - printf
** Cette fonction produit une sortie selon le format rencontré.
Notre fonction printf, engloble toutes les fonctions pour traiter chaque cas de format rencontré (si la valeur donnée est un entier, chaîne de caractère, caractère, etc...)**

## Commande qui permet la compilation :
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
	- gcc : est utilisé pour compiler notre code
Le code respecte le standard C89 et tous les avertissements lors de la compilation sont activés (si toutes les erreurs ne sont pas corrigés, alors la compilation ne fonctionnera pas) en compilant tous les fichiers qui se finissent par .c (cela évite de mettre tous les fichiers un par un dans notre gcc)
	Après la compilation, un fichier a.out est créé. Et pour avoir notre/nos valeurs de retour, il faudra l'éxécuter sur le terminal via la commande ./a.out

## Exigences :
	- éditeurs autorisés: vi, vim, emacs
	- Tous les fichiers sont compilé sur Ubuntu 20.04 LTS
	- Le code utilise le style Betty
	- Notre structure, ainsi que les prototypes de toutes les fonctions sont inclus dans le main.h

## Flowchart :
```mermaid
graph TD;

    A["Start"] --> B["_printf"]
    B -- format(arg) --> Z[va_list arg  va_start arg, format]
    Z --> C{"if format NULL?"}
    C -- NON --> D{"if format %?"}
    C -- OUI --> F{"return -1"}
    D -- OUI --> E{"if %specifier?"}
    X["📌 Structure tableau associe spécifiers à fonction*"] -.-> E
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

### Contenu du repo :
	_putchar.c
	main.h
	_printf.c
	function_char.c
	function_integer.c
	function_pourcentage.c
	function_strings.c
	a.out
	main.c
	man_3_printf
	README.md

#### Exemple d'utilisation de la fonction _printf(code ou screenshots) avec le résultat en STDOUT

#### Comment accéder à la man page (via une commande d'exécution) :

	man ./man_3_printf

#### Exemples :
	// _printf("Negative:[%d]\n", -762534); --> retourne -762534

	// _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n'); --> With some more args: You know nothing, Jon snow.

	// _printf("Percent:[%%]\n"); --> %

	// thought = _printf("Hello Samourai\n"); --> Hello Samourai

	// _printf("Length:%d\n", thought); --> Lenght:15


#### Failles mémoire détectés ?
On détecte une fuite de mémoire avec l'utilisation de Valgrind, un outil notamment utile pour mettre en évidence des potentiels fuite de mémoire.
	- Valgrind ./a.out ! = total heap usage : allocs, frees, 1,024 bytes allocated
	Après l'utilisation de Valgrind l'on peut voir que nous n'avons pas de fuite mémoire car notre allocation mémoire statique retiens bien une valeur retour (on retourne bien le nombre total de caractère imprimé et on ferme bien notre déclaration argument variadique par un va_end)
