#include <stdio.h>

int main() {
    double salario;

    printf ("Digite o valor do salário: ");
    scanf ("%lf", &salario);

    if (salario <= 1500) {
        printf ("SALÁRIO BAIXO");

    }
    
    else if (salario >=1501 && salario <=3000) {
        printf ("SALÁRIO MÉDIO");
    }

    else if (salario >= 3001) {
        printf ("SALÁRIO ALTO");
    }

    else {
        printf ("Esse formato é Inválido.");
    }

    return 0;
}
//by clangsdev