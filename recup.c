#include <stdio.h>
#include <stdlib.h>
// Dans une premiere partie dans le C on va recupérer l'ensemble des données et les mettre dans une liste chainées
// Dans une deuxieme partie dans le C on va trier et sommer la liste chainées 

// Définition d'un nœud d'un chainon
typedef struct chainon {
  int ID;
  int capacity;
  int load;
  struct chainon * next;
} Chainon;

// Fonction permettant de créer un chainon 
Chainon * creationChainon(int a, int b, int c) {
  Chainon * d = malloc(sizeof(Chainon));
  if (d == NULL) {
    exit(1);
  }
  d->ID = a;
  d->capacity = b;
  d->load=c
  d->next = NULL;
  return d;
}

// Fonction permettant d'insérer un chainon en début de liste 
Chainon* insertDebut(Chainon* pliste, int a, int b, int c){
  Chainon * n = creationChainon(a, b,c);
  
  if (pliste == NULL) {
    return n;
  }
  n->next = pliste;
  pliste = n;
  
  return pliste;
}

// Fonction permettant d'insérer le chainon à la fin de la liste 
Chainon * insertFin(Chainon * pliste, int a, int b,int c){
  Chainon * n = creationChainon(a, b, c);
  Chainon * p1;
  if (pliste == NULL) {
    return n;
  }
  p1 = pliste;
  while (p1->next != NULL) {
    p1 = p1->next;
  }
  p1->next = n;
  return pliste;
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

  printf("start\n");

  FILE * fichier = NULL;
  Chainon * pliste = NULL;

  //ouverture du fichier
  fichier1 = fopen("hvb", "r");

  //on récurèpe les données du fichiers et on les insère dans une liste chainée grace à la commande fscanf
  while (fscanf(fichier, "%d", &a) == 1) {  
    fscanf(fichier, "%d", &b);
    fscanf(fichier, "%d", &c);
    pliste = insertDebut(pliste, a, b, c);
  }


