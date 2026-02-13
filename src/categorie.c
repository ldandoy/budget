#include <stdio.h>
#include "headers/categorie.h"

void afficher_categories(Categorie categories[], int nb) {
    for (int i = 0; i < nb; i++) {
        printf("[%d] %s\n", categories[i].id, categories[i].nom);
    }
}