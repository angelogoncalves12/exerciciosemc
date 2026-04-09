#include <stdio.h>
int main() {
    double n1,n2,nmaior;
    
    printf ("Digite um número: ");
    scanf ("%lf", &n1);
    printf ("Digite outro número: ");
    scanf ("%lf", &n2);

    if (n1 > n2) {
        nmaior = n1;
        printf ("O número maior é: %.2lf", nmaior , "e os números são diferentes");
    } 
    
    else if (n2 > n1) {
        nmaior = n2;
        printf ("O número maior é: %.2lf", nmaior , "e os números são diferentes");
    } 
    
    else {
        printf ("Os números são iguais");
    }
    
    return 0;
}   
//by clangsdev