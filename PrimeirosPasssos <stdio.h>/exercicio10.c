#include <stdio.h>
    int main (){
        int numero;

        printf ("Diga um número de 1 a 7: ");
        scanf ("%i", &numero);

        if (numero == 1) {
            printf ("DOMINGO");
        }
        else if (numero == 2){
            printf ("SEGUNDA");
        }
        else if (numero == 3){
            printf ("TERÇA");
        }
        else if (numero == 4){
            printf ("QUARTA");
        }
        else if (numero == 5){
            printf ("QUINTA");
        }
        else if (numero == 6){
            printf ("SEXTA");
        }
        else if (numero == 7){
            printf ("SÁBADO");
        }
        else {
            printf ("ESSE NÃO É UM NÚMERO VÁLIDO.");
        }
        
        return 0;
    }