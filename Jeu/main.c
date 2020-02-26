#include <stdio.h>
#include <stdlib.h>

int affichageMenu(void)
{
    int choixMenu;

    printf("\n\n\n\nMAIN MENU \n\n");
    printf("1.Create New Game\n");
    printf("2.Load Saved Game\n");
    printf("3.About\n");
    printf("4.Exit\n");
    printf("\nVotre choix?\n\n");
    scanf("%d", &choixMenu);
    return choixMenu;
}
int main(void)
{
    switch (affichageMenu())
    {
    case 1:
        printf("You selected Create New Game");
        break;
    case 2:
        printf("You selected Load Save Game \n");
        break;
    case 3:
        printf("ehl");
        break;
    case 4:
        printf("Enzo HADEG \nRomain CALVET \nWalid BEN KHELFALLAH \n");
        break;
    default:
        printf("er");
        break;
    }

    system("PAUSE");
    return 0;
}
