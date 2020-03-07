int **creamap()
{
    int **tab;
    tab = (int**)malloc(sizeof(int*)*5);
    int i = 0, j = 0;

    for (i = 0 ; i < 5 ; i++)
    {
        tab[i] = (int*)malloc(sizeof(int)*5);
        for (j = 0 ; j < 5 ; j++)
        {
            tab[i][j] = 0;
        }
    }
    tab[2][2]=1; //personnage
    tab[1][1]=2; //monstre
    tab[4][4]=3;//items(potions)
    return tab;
}

void affichagemap(int **map)
{
    int i = 0, j = 0;
    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            printf("%c ",map[i][j] == 2 ? '_' : map[i][j] == 1 ? '*' : map[i][j] == 3 ? 'H': '_' );//conversion des valeurs du tableau en charactère affichable
        }
        printf("\n");
    }
}
