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
