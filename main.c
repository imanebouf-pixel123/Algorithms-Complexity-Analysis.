#include <stdio.h>

void inserer(int T[], int *n, int i, int m) {
    // CORRECTION : j = *n (pas "N)
    for (int j = *n; j > i; j--) {
        T[j] = T[j - 1];
    }
    T[i] = m;
    (*n)++;  // On augmente le nombre d'éléments
}

int main() {
    int A[8] = {23, 30, 36, 44, 59, 63, 71};  // Tableau de taille 8
    int n = 7;  // 7 éléments utilisés sur 8 possibles
    int i = 4;  // Position où insérer
    int m = 47; // Valeur à insérer

    printf("Tableau avant insertion : ");
    for (int k = 0; k < n; k++) {
        printf("%d ", A[k]);
    }
    printf("\n");

    // Appel de la fonction
    inserer(A, &n, i, m);

    printf("Tableau après insertion : ");
    for (int k = 0; k < n; k++) {
        printf("%d ", A[k]);
    }
    printf("\n");

    return 0;
}
