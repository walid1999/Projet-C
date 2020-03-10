int* search_personnage(int **creamap, int personnage)  //Fonction permettant de les personnnages
{
    int j,i;
    j = 0;
    while (j < 5)
    {
        i = 0;
        while(i < 5)
        {
            if (creamap[i][j] == personnage)
            {
                printf("%d | %d \n",i,j);
                return i,j;
            }
            i++;
        }
        j++;
    }
    return 0;
}
