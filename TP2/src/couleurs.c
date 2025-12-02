#include <stdio.h>

int main() {

    char chaine1[100];
    char chaine2[100];
    char copie[100];
    char concat[200];

    printf("Entrez la première chaîne : ");
    scanf("%s", chaine1);

    printf("Entrez la deuxième chaîne : ");
    scanf("%s", chaine2);

    int i = 0;
    while (chaine1[i] != '\0') {
        i++;
    }
    int longueur1 = i;

    i = 0;
    while (chaine2[i] != '\0') {
        i++;
    }
    int longueur2 = i;

    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    int j = 0;

    for (i = 0; chaine1[i] != '\0'; i++) {
        concat[j] = chaine1[i];
        j++;
    }

    for (i = 0; chaine2[i] != '\0'; i++) {
        concat[j] = chaine2[i];
        j++;
    }
    concat[j] = '\0';

    printf("\n--- Résultats ---\n");
    printf("Longueur de la première chaîne : %d\n", longueur1);
    printf("Longueur de la deuxième chaîne : %d\n", longueur2);
    printf("Copie de la première chaîne : %s\n", copie);
    printf("Concaténation : %s\n", concat);

    return 0;
}
