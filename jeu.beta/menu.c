#include "personnage.h"
#include <stdio.h>
#include <stdlib.h>
void affichageMenu(){
    int choixMenu;
    do{
        system("cls");
        printf("\n\n\n\nMAIN MENU \n\n");
        printf("1.Create New Game\n");
        printf("2.Load Saved Game\n");
        printf("3.About\n");
        printf("4.Exit\n");
        printf("\nVotre choix?\n\n");
        scanf("%i", &choixMenu);

        switch (choixMenu)
        {
        case 1:
            {
            printf("You selected Create New Game \n");
            break;
            (choixMenu != 1);
            }
            break;
        case 2:
            printf("You selected Load Save Game \n");
            system("pause");
            break;
        case 3:
            printf("Enzo HADEG \nRomain CALVET \nWalid BEN KHELFALLAH \n");
            system("pause");
            break;
        case 4:
            printf("\nBye!\n");
            system("pause");
            break;

        default:
            printf("\n er\n");
            system("pause");
            break;
        }
    }while   (choixMenu != 1);
        {
            personnage* Joueur = (personnage*)malloc(sizeof(personnage)); //demande a la machine de sauvegarder un espace memoire de taille "personnage"
            Joueur->name = (char*)malloc(sizeof(char)*20);//meme chose pour le name car c'est un pointeur et on sait pas combien il peu stocker *20
            printf("Entrez votre prenom : ");
            scanf("%s",Joueur->name);
            Joueur->pv = 20;
            Joueur->att = 3;
            Joueur->def = 5;
            printf("\nBonjour %s, \nBienvenue dans le RPG\n ", Joueur->name);
            printf("\nVous avez :\n\n%d pv ""\n%d attaque" "\n%d d�fense", Joueur->pv, Joueur->att, Joueur->def );

        }
}
