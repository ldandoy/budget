#include <stdio.h>
#include "headers/categorie.h"
#include "headers/depense.h"

int main(void) {
    Categorie categories[MAX_CATEGORIES];
    Depense depenses[MAX_DEPENSES];

    int nbCategories = 2;
    int nbDepenses = 2;

    categories[0] = (Categorie){1, "Alimentation"};
    categories[1] = (Categorie){2, "Transport"};

    depenses[0] = (Depense){1, 12.50f, "Sandwich", 1};
    depenses[1] = (Depense){2, 2.10f, "Bus", 2};

    afficher_categories(categories, nbCategories);
    afficher_depenses(depenses, nbDepenses);

    return 0;
}
