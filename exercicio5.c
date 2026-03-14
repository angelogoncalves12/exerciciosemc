#include <stdio.h>
int main() {
    double temperatura;

    printf ("Digite a temperatura Celsius: ");
    scanf ("%lf", &temperatura);

    if (temperatura <= 15) {
        printf ("Frio");
    } 
    
    else if (temperatura > 15 && temperatura <= 30) {
        printf ("Agradável");
    } 
    
    else {
        printf ("Quente");
    }
    return 0;
}

//by clangsdev