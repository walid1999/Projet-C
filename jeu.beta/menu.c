#include "personnage.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "header.h"
#include "cremap.h"
#include "serchpersonnage.h"
#include "choix.h"


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
            printf("You selected Create New Game- \n");
            break;

            }
            break;
        case 2:
            printf("You selected Load Save Game \n");
            break;
        case 3:
            printf("Enzo HADEG \nRomain CALVET \nWalid BEN KHELFALLAH \n");
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
            int perso;
            char playerChoice;

            personnage* Joueur = (personnage*)malloc(sizeof(personnage)); //demande a la machine de sauvegarder un espace memoire de taille "personnage"

            Joueur->name = (char*)malloc(sizeof(char)*20);//meme chose pour le name car c'est un pointeur et on sait pas combien il peu stocker *20
            printf("Entrez votre prenom : ");
            scanf("%s",Joueur->name);
            Joueur->pv = 20;
            Joueur->att = 3;
            Joueur->def = 5;
            printf("\nBonjour Sergent Chef %s \n") ;
            Sleep(1000);
            printf("\nVous incarnez un jeune policier de Clichy");
            Sleep(2000);
            printf("\na la recherche de deux voleurs\n");
            Sleep(2000);
            printf("\nBaptiste Lereufton");
            Sleep(2000);
            printf(" et Elodie Latortu\n");
            Sleep(2000);
            printf("\nEn tant que Sergent Chef Vous avez:\n\n%d points de vie "" %d points d'attaque" " %d de defenses\n\n", Joueur->pv, Joueur->att, Joueur->def );

          int map = creamap(&perso);
          do{
            affichagemap(map);
            search_personnage(map, perso);
            choix(playerChoice);
            int Tour = deplacement(playerChoice, map, search_personnage(map, perso));
            map = Tour;

          }while (playerChoice = 'f');


        }
}

