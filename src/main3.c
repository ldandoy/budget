#include <stdio.h>
#include <stdlib.h>
#include "headers/categorie.h"
#include "headers/depense.h"

int main(void) {

    /* --------- Catégories (toujours statiques) --------- */

    Categorie categories[MAX_CATEGORIES];
    int nbCategories = 0;

    categories[nbCategories++] = (Categorie){1, "Alimentation"};
    categories[nbCategories++] = (Categorie){2, "Transport"};

    /* --------- Dépenses (deviennent dynamiques) --------- */

    Depense *depenses = NULL;   // pointeur
    int nbDepenses = 0;


    /* On décide d'allouer la place pour 3 dépenses */
    int capacite = 3;

    depenses = malloc(capacite * sizeof(Depense));

    if (depenses == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

    /* --------- Ajout de dépenses --------- */

    depenses[nbDepenses++] = (Depense){1, 12.50f, "Sandwich", 1};
    depenses[nbDepenses++] = (Depense){2, 2.10f, "Bus", 2};
    depenses[nbDepenses++] = (Depense){3, 25.00f, "Courses", 1};

    /* --------- Affichage --------- */

    printf("Liste des dépenses :\n");

    for (int i = 0; i < nbDepenses; i++) {
        printf(" %.2f € - %s (cat %d)\n",
               depenses[i].montant,
               depenses[i].libelle,
               depenses[i].categorieId);
    }


    /* --------- Libération mémoire --------- */

    free(depenses);
    Depense *depenses = NULL;

    return 0;
}
