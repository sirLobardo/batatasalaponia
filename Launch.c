#include <stdio.h>
#include <stdlib.h>
#include "victor.h"
#include "guilherme.h"

int main()
{
    int funcao()
    {
        int escolha;

        imprimirmapa();
        menu();
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("oi");
            system("pause");
            system("cls");
            funcao();
            break;
        case 2:
            system("cls");
            comojogar();
            system("pause");
            system("cls");
            funcao();
            break;
        case 3:
            return 0;

        default:
            system("cls");
            funcao();
            break;
        }
    }
    funcao();
    system("pause");
    return 0;
}
