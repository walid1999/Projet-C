#include <stdio.h>
#include <stdlib.h>
#include "cremap.h"

int deplacement(char choix, int **map, int* searchpers)
{
    int i = 0, j = 0;






    int pos = searchpers;

    if (choix=='Z'){

        pos = map[i-1][j];
    }

    else if (choix == 'Q'){

         pos=map[i][j-1];
    }

    else if (choix == 'S'){

         pos=map[i+1][j];
    }

    else if (choix == 'D'){

         pos=map[i][j+1];
    }





    return pos;

}
