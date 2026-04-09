#include <stdio.h>
int main() {
    int numero;
    
    printf ("Digite um número: ");
    scanf ("%i", &numero);
    
    if (10 <= numero && numero <= 20) {
        printf ("DENTRO DO INTERVALO");
    } 
    else {
        printf ("FORA DO INTERVALO");
    }
    
    return 0;
}
//by clangsdev