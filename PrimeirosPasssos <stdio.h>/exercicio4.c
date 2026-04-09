#include <stdio.h>
int main() {
    double nota;
    
    printf ("Digite sua nota: ");
    scanf ("%lf", &nota);
    
    if (nota >= 7.0) {
        printf ("APROVADO");
    }

    else {
        printf ("REPROVADO");
    }
    
    return 0;
}

//by clangsdev