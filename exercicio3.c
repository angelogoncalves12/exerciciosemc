#include <stdio.h>
int main() { 
    int número;

    printf ("Digite um número: ");
    scanf ("%i", &número);

    if (número % 2 == 0) {
        printf ("O número é par");
    } 
    
    else {
        printf ("O número é ímpar");
    }


return 0;
}
//by clangsdev