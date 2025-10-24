#include <stdio.h>

int main() {
    int somme = 0; 
    int i;

    for (i = 1; i <= 1000; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }
        if (somme > 5000) {
            break;
        }
    }
    printf("somme : ", somme);

    return 0;
}


