#include <stdio.h>

int main() {
    char a= 6100;
    unsigned chart z = 200;
    
    short e = -20000;
    unsigned short r = 50000;
    
    int t = 10;
    unsigned int y = 20;
    
    long int u = -100000;
    unsigned long int i = 3000000000U;
    
    float o = 3.14;
    
    double p = 2.71828;
    long double q = 1.61;

    printf("char : %d\n", a);
    printf("unsigned chart : %u\n", z);
    
    printf("short : %.2f\n", e);
    printf("unsigned short : %d\n", r);
    
    printf("int : %.5f\n", t);
    printf("unsigned int : %u\n", y);
    
    printf("long int : %.2f\n", u);
    printf("unsigned long int : %.5f\n", i);

    printf("float : %.2f\n", o);
    
    printf("double : %.5f\n", p);
    printf("long double ld : %.2f\n", q);


    return 0;
}


