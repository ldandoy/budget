#include <stdio.h>
#include "headers/categorie.h"
#include "headers/depense.h"

int main(void) {

    Categorie categories[MAX_CATEGORIES];
    Depense depenses[MAX_DEPENSES];

    categories[0] = (Categorie){1, "Alimentation"};
    categories[1] = (Categorie){2, "Transport"};

    depenses[0] = (Depense){1, 12.50f, "Sandwich", 1};
    depenses[1] = (Depense){2, 2.10f, "Bus", 2};

    for (int i = 0; i < 2; i++) {
        printf(" %.2f euros - %s (cat %d)\n",
               depenses[i].montant,
               depenses[i].libelle,
               depenses[i].categorieId
            );
    }

    for (int i = 0; i < 2; i++) {
        printf("[%d] %s\n", 
            categories[i].id, 
            categories[i].nom
        );
    }

    return 0;
}