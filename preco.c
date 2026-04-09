#include <stdio.h>

int main() {
    float kWh, preco, custo;
    char inst;
    
    preco == 0;
    printf ("Qual a quantidade kWh consumida? \n");
    scanf ("%.2f", &kWh);
    
    printf ("Instalação: Residencial, Industrial ou Comercial? (R/I/C): \n");
    scanf (" %c", &inst);
    
    if (inst == 'R'){
        if (kWh <= 500){
            preco = 0.40;
            printf ("O preço é igual a %f", preco \n");
            }
        else {
            preco = 0.65;
            printf ("O preço é igual a %f", preco \n");
        }

    else if (inst == 'C') {
        if (kWh <= 5000){
            preco = 0.55;
            printf ("O preço é igual a %f", preco \n");
            }
        else {
            preco == 0.60;
            printf ("O preço é igual a %f", preco \n");
            }
    }
    else if (inst == 'I') {
        if (kWh <= 1000){
            preco == 0.40;
            printf ("O %f é igual a R$ 0.40", preco \n");
            }
        else {
            preco == 0.65;
            printf ("O %f é igual a R$ 0.65", preco \n");
            }
    }
    else {
        printf ("Valor inválido, retorne a operação.\n");
    }

    return 0;
}