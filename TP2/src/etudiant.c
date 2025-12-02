#include <stdio.h>

int main() {

    char noms[5][30] = {
        "Jubénot", "Martin", "Isidore", "Marie-christ", "Buttant"
    };

    char prenoms[5][30] = {
        "Anaé", "Karlotta", "Mathéo", "Wilfred", "Stéphane"
    };

    char adresses[5][50] = {
        "12 Rue des martyrs",
        "8 rue Pierre de Coubertin",
        "25 Boulevard Général de Gaulle",
        "4 Rue des Champs-Elysées",
        "19 Rue Pontoise"
    };

    float noteC[5] = {14.5, 12.0, 16.0, 9.5, 18.0};
    float noteSE[5] = {15.0, 11.5, 13.0, 10.0, 17.0};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant(e) %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note C : %.2f\n", noteC[i]);
        printf("Note SE : %.2f\n", noteSE[i]);
    }

    return 0;
}
