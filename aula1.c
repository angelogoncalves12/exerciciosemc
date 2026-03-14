#include <stdio.h>

int main() {
    int idade = 17;
    
    if (idade >= 0 && idade < 3) { // código com valor explícito (já incluso)
        printf ("Sua idade é %i e vocẽ é um bebê", idade);
    } 
    
    else if (idade >= 3 && idade < 13) {
        printf ("Sua idade é %i e vocẽ é uma criança", idade);
    } 
    
    else if (idade >= 13 && idade < 18) {
        printf ("Sua idade é %i e vocẽ é um adolescente", idade);
    }
    
    else if ( idade >= 18 && idade < 25) {    
        printf ("Sua idade é %i e vocẽ é um jovem", idade);
    } 
    
    else if ( idade >= 26 && idade < 61 ) {
        printf ("Sua idade é %i e vocẽ é um adulto", idade);
    } 
    
    else if ( idade >= 61 && idade < 101) {
        printf ("vocẽ é idoso");
    } 
    
    else if ( idade >= 101) {
        printf ("um pé na cova, outro no sabonete"); 
    } 
    
    else{
        printf ("Idade Inválida"); 
    }
      
    // escopo lógico de algoritimo:
    // idade = 0 e 2 - você é um bebê
    // idade == 3 e 12 - criança (dois iguais representa comparação)
    // idade == 12 e 17 - adolescente
    // idade = 17 e 24 - jovem
    // idade = 24 e 60 anos - adulto
    // idade = 60 e 100 anos - idoso
    // idade = maior que 100 anos 

    return 0;
}

// by clangsdev