#include <stdio.h>
int main() {
    int número;
    
    printf ("Digite um número: ");
    scanf ("%i", &número);

    if (número < 0) {
        printf ("NEGATIVO");
    } 
    
    else if (número > 0) {
        printf ("POSITIVO");
    } 
    
    else {
        printf ("ZERO"); 
    }
    
    
    return 0;
}
//by clangsdev