#include <stdio.h>

int main (){
    double nota;

    printf ("Informe a sua nota para obter seu conceito: ");
    scanf ("%lf", &nota);

    if (nota >=9 && nota <=10) {
        printf ("CONCEITO A");
    }
    else if (nota >=7 && nota <9) {
        printf ("CONCEITO B");
    }
    else if (nota >=5 && nota <7){
        printf ("CONCEITO C");
    }
    else if (nota <=5){
        printf ("CONCEITO D");
    }
    else {
        printf ("Essa nota é inválida.");
    }
    
    return 0;
}
//by clangsdev