
#include "exercice.h"
#include "fonctions.h"
#include <stdio.h>

void exercice1() {
    int a = saisirEntier();
    int b = saisirEntier();
    afficher(getMax(a, b));
    printf("Si 1 alors il y a egalite\n");
}

void exercice2() {
    saisirEntier();
}

void exercice3() {
    int n = 0;
    int l = saisirEntier();
    int L = saisirEntier();
    printf(" Tapez 1 pour calculer Aire sinon 2 pour le Perimetre : \n");
    scanf("%d", &n);
    switch (n) {
        case 1 : {
            afficher(calculAire(l, L));
            break;
        }
        case 2 : {
            afficher(calculPerimetre(l, L));
            break;
        }
        default: {
            printf("Il y a une erreur \n");
            break;
        }
    }
}

void exercice4(){
    int a = saisirEntier();
    afficher(calculMultiple(a,3));
}

void exercice5(){
    float a = saisirFloat();
    float b = saisirFloat();
    float c = saisirFloat();
    afficherF(calculMoyenne(a,b,c));
}
void exercice5Plus7() {
    int nb_class = 0;
    int nb_eleve = 0;
    int totEleve = 0;
    printf("Entrez le nbr de classe ouverte \n < \n");
    scanf("%d", &nb_class);
    remplissageClasse(nb_class, nb_eleve, totEleve);
}
void exercice5Plus8() {
    int n;
    printf("Saisir un nombre entier : \n < \n ");
    scanf("%d", &n);
    AlgoBoucleMultiple(n);
}
void exercice5Plus10(){
    AlgoNote();
}
