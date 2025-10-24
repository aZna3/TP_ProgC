#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n", a-b);
    printf("ab=%d\n", ab);
    printf("a/b=%d\n", a/b);
    printf("a%%b=%d\n", a%b);

    if(a==b)
        printf("a==b : vrai\n");
    else
        printf("a==b : faux\n");

    if(a>b)
        printf("a>b : vrai\n");
    else
        printf("a>b : faux\n");

    return 0;
}
