# TP — Gestion de dépenses avec liste chaînée

## Objectifs pédagogiques

À la fin du TP, l’étudiant doit savoir :

- définir une structure contenant un pointeur vers elle-même
- créer un nœud avec malloc
- insérer un élément dans une liste chaînée
- parcourir une liste
- libérer correctement la mémoire

## Étape 1 — Définir la structure de la liste

1. Dans src/headers/depense.h, modifiez la structure Depense pour qu’elle contienne :

- un identifiant
- un montant
- un libellé
- un identifiant de catégorie
- un pointeur vers la dépense suivante

2. Le pointeur vers la suivante doit être :

```c
struct Depense *suivante;
```

3. Expliquez pourquoi on écrit struct Depense* et non simplement Depense*.

## Étape 2 — Créer un nœud dynamiquement

Dans depense.c :

1. Créez une fonction :

```c
Depense* creer_depense(int id, float montant, const char* libelle, int categorieId);
```

2. Cette fonction doit :

- allouer la mémoire avec malloc
- vérifier que l’allocation a réussi
- remplir les champs
- mettre suivante à NULL
- retourner le pointeur créé

## Étape 3 — Insérer en tête de liste

1. Créez une fonction :

```c
Depense* ajouter_en_tete(Depense* tete, Depense* nouvelle);
```

2. Cette fonction doit :

- faire pointer la nouvelle dépense vers l’ancienne tête
- retourner la nouvelle tête

3. Dans main.c :

- déclarez un pointeur Depense* liste = NULL;
- ajoutez 3 dépenses à la liste

## Étape 4 — Parcourir et afficher la liste

1. Créez une fonction :

```c
void afficher_liste(Depense* tete);
```

2. Utilisez une boucle while

3. Affichez toutes les dépenses

## Étape 5 — Libérer toute la liste

1. Créez une fonction :

```c
void liberer_liste(Depense* tete);
```

2. Utilisez une boucle pour :

- sauvegarder le suivant
- libérer le courant
- avancer

3. Appelez cette fonction à la fin du main