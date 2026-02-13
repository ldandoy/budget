#ifndef DEPENSE_H
#define DEPENSE_H

#define MAX_DEPENSES 50

typedef struct {
    int id;
    float montant;
    char libelle[50];
    int categorieId; // lien vers une catégorie
} Depense;

#endif

// void afficher_depenses(Depense depenses[], int nb);