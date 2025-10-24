#include <stdio.h>

int main() {
    char c= 6100;
    unsigned chart uc = 200;
    
    short s = -20000;
    unsigned short us = 50000;
    
    int i = 10;
    unsigned int ui = 20;
    
    long int li = -100000;
    unsigned long int uli = 3000000000U;
    
    float f = 3.14;
    
    double d = 2.71828;
    long double ld = 1.61;

    printf("char : %d\n", c);
    printf("unsigned chart : %u\n", uc);
    
    printf("short : %.2f\n", s);
    printf("unsigned short : %d\n", us);
    
    printf("int : %.5f\n", i);
    printf("unsigned int : %u\n", ui);
    
    printf("long int : %.2f\n", li);
    printf("unsigned long int : %.5f\n", uli);

    printf("float : %.2f\n", f);
    
    printf("double : %.5f\n", d);
    printf("long double ld : %.2f\n", ld);


    return 0;
}

