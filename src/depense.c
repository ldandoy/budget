#include <stdio.h>
#include "headers/depense.h"

void afficher_depenses(Depense depenses[], int nb) {
    for (int i = 0; i < nb; i++) {
        printf(" %.2f € - %s (cat %d)\n",
               depenses[i].montant,
               depenses[i].libelle,
               depenses[i].categorieId);
    }
}