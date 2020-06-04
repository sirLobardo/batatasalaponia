#include <stdio.h>
#include <stdlib.h>

int funcao()
{
    int escolha;

    menu();
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("Lôbo");
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
        exit;
        break;

    default:
        system("cls");
        funcao();
        break;
    }
}