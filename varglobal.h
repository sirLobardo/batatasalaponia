char mapa[13][13] = {
    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'},
    {'A', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
    {'B', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'C', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'D', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'E', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'F', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
    {'G', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
    {'H', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'I', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'J', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'K', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
    {'L', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}

};
void marcar1(int lin, int col)
{
    if (lin = 1 || lin = 12 || col = 1 || col = 12)    {
        printf("Coordenadas invalidas!\n");
    }
    else
    {
        matriz[lin][col] = '1';
    }

    int funcao();
    void imprimirmapa();
    void menu();
    void comojogar();
    void regras();
