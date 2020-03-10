#include <stdio.h>
#include <stdlib.h>

int choix(char PlayerChoice)
{
  printf("Deplacement : ZQSD ");

  scanf("%s", &PlayerChoice);
  while (PlayerChoice != 'Z' && PlayerChoice != 'Q' && PlayerChoice != 'S' && PlayerChoice != 'D' && PlayerChoice != 'B' && PlayerChoice != 'f')
    {
      printf("choix incorrect ");
      scanf("%s", &PlayerChoice);
    }
  return PlayerChoice;
}
