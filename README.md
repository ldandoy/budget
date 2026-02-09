# TP C — Gestion de dépenses

## Objectifs pédagogiques

À la fin du TP, l’étudiant doit savoir :

- définir et utiliser des structures
- organiser un projet C avec .h / .c
- manipuler des tableaux
- comprendre le lien entre deux structures
- compiler un projet multi-fichiers avec un Makefile
- comprendre la différence entre sources et fichiers générés

## Organisation du projet

```css
budget/
├── Makefile
├── src/
│   ├── headers/
│   │   ├── categorie.h
│   │   └── depense.h
│   ├── categorie.c
│   ├── depense.c
│   └── main.c
└── dist/
    └── budget   (exécutable)
```

## Étape 0 — Compilation avec Makefile

### Consignes

1. À la racine de votre projet, créez le fichier Makefile.

2. Le Makefile doit :

- compiler tous les fichiers .c du dossier src/
- inclure les fichiers .h depuis src/headers/
- générer l’exécutable dans le dossier dist/

3. Le nom de l’exécutable doit être : budget

### Commandes attendues

```bash
make        # compile le projet
make run    # exécute le programme
make clean  # supprime les fichiers générés
```

## Étape 1 — Structures et tableaux statiques

### Consignes

- Créez un fichier categorie.h dans src/headers/

Dans ce fichier :
- définissez une constante MAX_CATEGORIES
- définissez une structure Categorie contenant :
    - un identifiant (int id)
    - un nom (char nom[])

- Créez un fichier depense.h dans src/headers/

Dans ce fichier :
- définissez une constante MAX_DEPENSES
- définissez une structure Depense contenant :
    - un identifiant
    - un montant
    - un libellé
    - un identifiant de catégorie (categorieId)


## Étape 2 — Déplacer la logique dans des fichiers .c

### Consignes

1. Dans main.c :
- déclarez un tableau de Categorie
- déclarez un tableau de Depense
- déclarez des variables pour stocker le nombre de catégories et de dépenses

2. Ajoutez manuellement au moins :
- 2 catégories
- 2 dépenses

3. Chaque dépense doit référencer une catégorie existante

4. Affichez toutes les dépenses avec
- le montant
- le libellé
- l’identifiant de la catégorie

### Validation attendue :

- le programme compile
- l’affichage est correct
- aucune sortie utilisateur n’est demandée

## Étape 3 — Séparation du code en fonctions

### Consignes

1. Créez un fichier categorie.c dans src/

2. Déplacez l’affichage des catégories dans une fonction :

```c
void afficher_categories(Categorie categories[], int nb);
```

3. Créez un fichier depense.c dans src/

4. Déplacez l’affichage des dépenses dans une fonction :

```c
void afficher_depenses(Depense depenses[], int nb);

```

5. Ajoutez les prototypes de ces fonctions dans les fichiers .h correspondants

6. Le fichier main.c ne doit plus contenir de logique d’affichage


## Étape 5 — Introduction à la mémoire dynamique

### Consignes

1. Remplacez le tableau statique des dépenses par :

- un pointeur sur Depense
- un compteur du nombre de dépenses

2. Allouez la mémoire avec malloc

3. Ajoutez une nouvelle dépense dans le tableau dynamique

4. Libérez la mémoire avant la fin du programme avec free


## Critères de validation

1. Le projet compile avec make
2. Le binaire est généré dans dist/
3. Le code est lisible et bien organisé
4. Les étapes sont respectées dans l’ordre