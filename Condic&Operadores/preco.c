#include <stdio.h>

int main() {
    float kWh, preco, custo;
    char inst;
    
    preco == 0;
    
    printf ("Instalação: Residencial, Industrial ou Comercial? (R/I/C): \n");
    scanf (" %c", &inst);
    
    printf ("Qual a quantidade kWh consumida? \n");
    scanf ("%.2f", &kWh);
  
    if (inst == 'R' || inst == 'r'){
        if (kWh <= 500){
            preco += 0.40;
             printf ("O preço é igual a %f \n", preco);
            }
        else {
            preco += 0.65;
             printf ("O preço é igual a %f \n", preco);
        }
}
    else if (inst == 'C' || inst == 'c') {
        if (kWh <= 1000){
            preco += 0.55;
            printf ("O preço é igual a %f \n", preco);
            }
        else {
            preco += 0.60;
            printf ("O preço é igual a %f \n", preco);
            }
    }
    else if (inst == 'I' || inst == 'i') {
        if (kWh <= 5000){
            preco += 0.55;
             printf ("O preço é igual a %f \n", preco);
            }
        else {
            preco += 0.60;
             printf ("O preço é igual a %f \n", preco);
            }
    }
    else {
        printf ("Valor inválido, retorne a operação.\n");
    }
    
    custo = preco * kWh;
    printf ("O custo total é %f", custo);

    return 0;
}