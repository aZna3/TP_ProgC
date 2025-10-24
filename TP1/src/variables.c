#include <stdio.h>

int main() {
    char a = 'M';
    unsigned char z = 250;
    
    short e = 800;
    unsigned short r = 1500;
    
    int t = 1500;
    unsigned int y = 1500;
    
    long int u = -15000;
    unsigned long int i = 55000;
    
    float o = 3.14f;
    
    double p = 2.71828;
    long double q = 1.61;

    printf("char : %c\n", a);
    printf("unsigned char : %u\n", z);
    
    printf("short : %d\n", e);
    printf("unsigned short : %u\n", r);
    
    printf("int : %d\n", t);
    printf("unsigned int : %u\n", y);
    
    printf("long int : %ld\n", u);
    printf("unsigned long int : %lu\n", i);

    printf("float : %f\n", o);
    
    printf("double : %lf\n", p);
    printf("long double : %Lf\n", q);

    return 0;
}
