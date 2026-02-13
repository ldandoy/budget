#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/depense4.h"

Depense* creer_depense(int id, float montant, const char* libelle, int categorieId) {
    Depense* nouvelle = malloc(sizeof(Depense));

    if (nouvelle == NULL) {
        printf("Erreur allocation\n");
        return NULL;
    }

    nouvelle->id = id;
    nouvelle->montant = montant;
    strcpy(nouvelle->libelle, libelle);
    nouvelle->categorieId = categorieId;
    nouvelle->suivante = NULL;

    return nouvelle;
}

Depense* ajouter_en_tete(Depense* tete, Depense* nouvelle) {
    nouvelle->suivante = tete;
    return nouvelle;
}

void afficher_liste(Depense* tete) {
    Depense* courant = tete;

    while (courant != NULL) {
        printf("%.2f euros - %s (cat %d)\n",
               courant->montant,
               courant->libelle,
               courant->categorieId);

        courant = courant->suivante;
    }
}

void liberer_liste(Depense* tete) {
    Depense* courant = tete;

    while (courant != NULL) {
        Depense* temp = courant;
        courant = courant->suivante;
        free(temp);
    }
}
