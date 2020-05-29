#include <stdio.h>
#include <stdlib.h>
#include "victor.h"
#include "guilherme.h"

int main()
{

    menu();
    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        printf("oi");
    }
    else if (escolha == 2)
    {
        system("cls");
        comojogar();
    }
    else if (escolha == 3)
    {
        system("exit");
    }

    system("pause");
    return 0;
}
