#include <stdio.h>

int main() {
    int n;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int U0 = 0;
    int U1 = 1;

    if (n >= 0) printf("0 ");
    if (n >= 1) printf("1 ");

    for (int i = 2; i <= n; i++) {
        int Un = U0 + U1;
        printf("%d ", Un);

        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
