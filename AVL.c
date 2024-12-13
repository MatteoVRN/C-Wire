#include <stdio.h>
#include <stdlib.h>

// Définition d'un nœud d'un arbre AVL
typedef struct chainon {
  int ID;
  int capacity;
  int load;
  struct chainon *fg;
  struct chainon *fg;
  int hauteur;
} Chainon;

Chainon * creationChainon(int a, int b, int c) {
  Chainon * d = malloc(sizeof(Chainon));
  if (d == NULL) {
    exit(1);
  }
  d->ID = a;
  d->capacity = b;
  d->load=c
  d->fg = NULL;
  d->fd = NULL;
  d->hauteur=NULL;
  return d;
}

// Fonction pour obtenir le maximum de deux entiers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Fonction pour obtenir le mnimum de deux entiers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Fonction pour obtenir le maximum de trois entiers
int max3(int a, int b, int c) {
    int m = (a > b) ? a : b; 
    return (m > c) ? m : c;  
}

// Fonction pour obtenir le minimum de trois entiers
int min3(int a, int b, int c) {
    int mi = (a < b) ? a : b;  
    return (mi < c) ? mi : c;  
}




int main() {

  int a;
  int b;
  int c;

  FILE * fichier = NULL;
  Chainon * pliste = NULL;

  //ouverture du fichier
  fichier = fopen("c-wire.csv", "r");

  //on récurèpe les données du fichiers et on les insère dans une liste chainée
  while (fscanf(fichier, "%d", &a) == 1) {
    //printf("a=%d\n", a);

    fscanf(fichier, "%f", &b);

    //printf("b=%f\n", b);
    pliste = insertDebut(pliste, a, b);

  }
