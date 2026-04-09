#include <stdio.h>
#include <string.h>

int main()
{
    char money [20];
    printf ("--------------------------------------\n");
    printf ("         Carrinho de Compras        \n");
    printf ("   Utilize apenas letras minúsculas. \n");
    printf ("--------------------------------------\n");
    printf("Voce tem dinheiro, cartão, ambos ou nenhum?\n");
    scanf(" %s", &money);

    if (strcmp (money, "cartão") == 0 || strcmp (money, "dinheiro") == 0 || strcmp (money, "ambos") == 0)
    {
        printf("Pode Comprar!\n");
    }

    else if (strcmp (money, "nenhum") == 0)
        {
            printf("Não pode Comprar!\n");
        }
        
    else
        {
            printf ("Utilize apenas caracteres minúsculos com a ortografia correta e responda o que for solicitado diretamente.\n");
        }
    return 0;
}