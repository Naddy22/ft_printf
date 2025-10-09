

# ft_printf

> 📄 Sujet officiel : *(ajouter le lien vers le PDF si disponible)*

## 1. Description du projet  
**ft_printf** est un projet du cursus 42 dont l’objectif est de **reproduire la fonction `printf` de la bibliothèque standard C**.  
Il permet de comprendre en profondeur :
- La gestion des arguments variadiques (`va_list`, `va_start`, `va_arg`, `va_end`)
- La manipulation de chaînes et conversions numériques
- L’écriture de fonctions modulaires et maintenables

Cette version contient :
- ✅ Conversions **obligatoires** : `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- ✅ Affichage sur la **sortie standard**
- ✅ Retour du **nombre de caractères imprimés**
- ✅ Un `Makefile`, un `ft_printf.h`, plusieurs fichiers `.c`
- ❌ Aucun **bonus**

---

## 2. Objectifs pédagogiques  
- Implémenter une version simplifiée de `printf`  
- Gérer les **arguments variadiques**  
- Travailler la **modularité du code**  
- Manipuler la **conversion de nombres en chaînes**  
- Retourner le **nombre de caractères affichés**  
- Écrire un **Makefile conforme à la norme 42**

---

## 3. Conversions prises en charge

| Conversion | Description |
|------------|-------------|
| `%c` | Affiche un caractère |
| `%s` | Affiche une chaîne de caractères |
| `%p` | Affiche une adresse mémoire en hexadécimal |
| `%d` / `%i` | Affiche un entier signé |
| `%u` | Affiche un entier non signé |
| `%x` | Affiche un entier en hexadécimal (minuscule) |
| `%X` | Affiche un entier en hexadécimal (majuscule) |
| `%%` | Affiche un symbole pourcentage |

---

## 4. Structure du projet

Tous les fichiers sont à la **racine du dépôt** :

```

.
├── ft_printf.c
├── ft_printf.h
├── ft_print_char.c
├── ft_print_str.c
├── ft_print_nbr.c
├── ft_print_unsigned.c
├── ft_print_hex.c
├── ft_print_ptr.c
├── main.c (optionnel pour tests)
├── Makefile

````

> Chaque conversion est gérée dans une fonction dédiée pour plus de clarté.

---

## 5. Installation

### Cloner le dépôt
```bash
git clone https://github.com/ton-pseudo/ft_printf.git
cd ft_printf
````

### Compiler la bibliothèque

```bash
make
```

Cela génère :

* `libftprintf.a` → bibliothèque statique
* `.o` → fichiers objets intermédiaires

---

## 6. Commandes Makefile

| Commande            | Description                              |
| ------------------- | ---------------------------------------- |
| `make` / `make all` | Compile et génère `libftprintf.a`        |
| `make clean`        | Supprime les `.o`                        |
| `make fclean`       | Supprime les `.o` **et** `libftprintf.a` |
| `make re`           | Recompile depuis zéro                    |

> Compilation avec `-Wall -Wextra -Werror` (norme 42).

---

## 7. Utilisation dans un autre projet

### Inclure le header

```c
#include "ft_printf.h"
```

### Compiler avec la bibliothèque

```bash
gcc mon_programme.c -L /chemin/vers/ft_printf -lftprintf -I /chemin/vers/ft_printf
```

Explications :

* `-L` : dossier contenant `libftprintf.a`
* `-lftprintf` : lien vers la bibliothèque
* `-I` : chemin du header `ft_printf.h`

---

## 9. Norminette

Le projet respecte la **Norme 42**, incluant :

* Fonctions ≤ 25 lignes
* Fichiers ≤ 5 fonctions
* Noms en `snake_case`
* 4 espaces (pas de tabs)
* Lignes ≤ 80 colonnes
* Une seule variable par ligne
* Pas de `for`, `switch`, `do...while`, `goto`
* Pas de variables non utilisées
* Pas de `//` (utiliser `/* */`)

---

## 10. Tests (optionnel)

Exemple de `main.c` :

```c
int main(void)
{
    ft_printf("Test char: %c\n", 'A');
    ft_printf("Test string: %s\n", "Hello");
    ft_printf("Test pointer: %p\n", (void *)0x1234);
    ft_printf("Test int: %d\n", -42);
    ft_printf("Test unsigned: %u\n", 42);
    ft_printf("Test hex min: %x\n", 255);
    ft_printf("Test hex maj: %X\n", 255);
    ft_printf("Test percent: %%\n");
    return (0);
}
```

Compiler et exécuter :

```bash
gcc main.c -L . -lftprintf -I .
./a.out
```
