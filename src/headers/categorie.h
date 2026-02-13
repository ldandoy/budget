#ifndef CATEGORIE_H
#define CATEGORIE_H

#define MAX_CATEGORIES 10

typedef struct {
    int id;
    char nom[30];
} Categorie;

#endif

// void afficher_categories(Categorie categories[], int nb);