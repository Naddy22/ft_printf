

# ft_printf

> 📄 Sujet officiel : [ft_printf_subject.pdf](https://github.com/Naddy22/ft_printf/blob/master/ft_printf_subject.pdf)

## Description du projet  
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

## Objectifs pédagogiques  
- Implémenter une version simplifiée de `printf`  
- Gérer les **arguments variadiques**  
- Travailler la **modularité du code**  
- Manipuler la **conversion de nombres en chaînes**  
- Retourner le **nombre de caractères affichés**  
- Écrire un **Makefile conforme à la norme 42**

---

## Conversions prises en charge

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

## Structure du projet

Tous les fichiers sont à la **racine du dépôt** :

```

.
├── ft_printf.c
├── ft_printf.h
├── ft_check_pourcent.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putnbr_unsigned.c
├── ft_putnbr_base.c
├── ft_strchr.c
├── ft_strlen.c
├── Makefile

````

> Chaque conversion est gérée dans une fonction dédiée pour plus de clarté.

---

## Installation

### Cloner le dépôt
```bash
git clone https://github.com/Naddy22/ft_printf.git
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

## Commandes Makefile

| Commande            | Description                              |
| ------------------- | ---------------------------------------- |
| `make` / `make all` | Compile et génère `libftprintf.a`        |
| `make clean`        | Supprime les `.o`                        |
| `make fclean`       | Supprime les `.o` **et** `libftprintf.a` |
| `make re`           | Recompile depuis zéro                    |

> Compilation avec `-Wall -Wextra -Werror` (norme 42).

---

## Utilisation dans un autre projet

### Inclure le header

```c
#include "ft_printf.h"
```

### Compiler avec la bibliothèque

```bash
gcc mon_programme.c -L /chemin/vers/ft_printf -lftprintf -I /chemin/vers/ft_printf.h
```

Explications :

* `-L` : dossier contenant `libftprintf.a`
* `-lftprintf` : lien vers la bibliothèque
* `-I` : chemin du header `ft_printf.h`

---

### Compiler et exécuter le main test inclus en commentaire dans ft_printf.c

Les tests sont commentés pour vous permettre de choisir lesquels exécuter.

```bash
gcc ft_printf.c -L . -lftprintf -I .
./a.out
```

---

## Norminette / Style du code

Ce projet respecte la **Norme 42** :  

- Maximum **25 lignes par fonction**  
- **Indentation de 4 espaces**  
- **Pas de ligne de plus de 80 caractères**  
- **Pas de fonctions imbriquées** (pas de `for`, `while`, ou `if` imbriqués au-delà de 5 niveaux)  
- **Noms de variables et fonctions explicites et cohérents**  
- **Pas de variables non utilisées**  
- **Pas de fonctions ou code inutilisé**  
- **Commentaires clairs et utiles**  
- **Gestion correcte des pointeurs NULL et des erreurs**  
- **Respect des fichiers et headers** (1 fonction par fichier si possible, includes propres)  

> Toutes les fonctions ont été vérifiées avec `norminette` pour garantir le respect du style et éviter les erreurs de compilation ou d’interprétation.
