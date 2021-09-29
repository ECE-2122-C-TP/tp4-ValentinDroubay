


#include "fonctions.h"
#include <stdio.h>

#define MACRO1 10

int saisirEntier() {
    int a;
    printf("saisir un entier \n");
    scanf("%d", &a);
    return a;
}

float saisirFloat() {
    float a;
    printf("saisir un entier \n");
    scanf("%f", &a);
    return a;
}

void afficher(int a) {
    printf(" Voici le resulat : %d\n", a);
}

void afficherF(float a) {
    printf(" Voici le resulat : %f\n", a);
}

void afficherFloat(float a) {
    printf("Voici le resultat : %f\n", a);
}

int getMax(int a, int b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        return 1;;
    }

}

int calculAire(int l, int L) {
    int Aire = 0;
    Aire = l * L;
    return Aire;
}

int calculPerimetre(int l, int L) {
    int Perimetre = 0;
    Perimetre = (l * 2) + (L * 2);
    return Perimetre;
}

int calculMultiple(int a, int b) {
    printf(" %d est un multiple de %d ? 1 si vrai 0 si faux \n", a, b);
    if (a > MACRO1) {

        printf("Votre chiffre est superieur a %d \n", MACRO1);
    } else if (a == MACRO1) {
        printf("Votre chiffre est egal a %d \n", MACRO1);
    } else {
        printf("Votre chiffre est inferieur a %d \n", MACRO1);
    }
    if (a % b == 0) {
        return 1;
    } else if (a % b != 0) {
        return 0;
    } else {
        printf("Il y a un probleme");
    }
}

float calculMoyenne(float a, float b, float c) {
    float moyenne;
    if (a >= 0 && a <= 20) {
        if (b >= 0 && b <= 20) {
            if (c >= 0 && c <= 20) {
                moyenne = (a + b + c) / 3;
                return moyenne;
            } else {
                return -1;
            }
        } else {
            return -1;
        }
    } else {
        return -1;
    }

}

void remplissageClasse(int nb_class, int nb_eleve, int totEleve) {
    for (int i = 1; i <= nb_class; i++) {
        printf("Entrez le nombre d'eleve dans la classe %d : \n", i);
        scanf("%d", &nb_eleve);

        totEleve += nb_eleve;
    }
    printf("Ainsi le nombre total d'eleve dans l'ecole est de : %d", totEleve);

}
void AlgoBoucleMultiple(int n){
    while(!(n % 7 ==0 && n % 2 ==0)){
        printf("Ressaisir le nombre :    (il n'est pas multiple de 7 et de 2)\n < \n");
        scanf("%d",&n);
    }
    printf("%d est un multiple de 7 et de 2 bravo ", n);
}

void AlgoNote(){
    int note = 0;
    int i = 0;
    int somme = 0;
    float moyenne = 0;
    while (!(note < 0)) {
        printf("Saisir note : \n");
        scanf("%d", &note);
        if (note >= 0) {
            somme = somme + note;
            i++;
        } else {
            moyenne = (float)somme/(float)i;
            printf("moyenne : %f \n", moyenne);

        }
    }
}


