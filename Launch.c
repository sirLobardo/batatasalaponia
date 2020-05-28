#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main()
{
    int escolha;

    menu();
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        printf("oi");

    }
    else if (escolha == 2)
    {
        printf("oi");
    }
    else
    {
        system("exit");
    }

    return 0;
}
