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

            personnage Joueur;

           //personnage* Joueur = (personnage*)malloc(sizeof(personnage)); //demande a la machine de sauvegarder un espace memoire de taille "personnage"

            int taille = 6;




            Joueur.name = (char*)malloc(sizeof(char)*20);//meme chose pour le name car c'est un pointeur et on sait pas combien il peu stocker *20
            printf("Entrez votre prenom : ");
            scanf("%s",Joueur.name);
            Joueur.pv = 20;
            Joueur.att = 3;
            Joueur.def = 5;
            Joueur.x = 2;
            Joueur.y = 2;
            printf("\nBonjour Sergent Chef %s \n") ;
            //Sleep(1000);
            printf("\nVous incarnez un jeune policier de Clichy");
            //Sleep(2000);
            printf("\na la recherche de deux voleurs\n");
            //Sleep(2000);
            printf("\nBaptiste Lereufton");
            //Sleep(2000);
            printf(" et Elodie Latortu\n");
            //Sleep(2000);
            printf("\nEn tant que Sergent Chef Vous avez:\n\n%d points de vie "" %d points d'attaque" " %d de defenses\n\n", Joueur.pv, Joueur.att, Joueur.def );



          //int map = creamap(&perso);
          carte map[taille][taille];

          for (int i = 0 ; i < taille ; i++){

                for (int j = 0 ; j < taille ; j++ ){

                    map[i][j].statut = 0;
                    map[i][j].description = "RAS";
                    map[0][j].statut = 4;
                    map[taille-1][j].statut = 4;
                    map[i][0].statut = 4;
                    map[i][taille-1].statut = 4;

                }
          }

          map[2][2].statut = 1; //personnage

          map[1][1].statut = 2; //monstre
          map[4][4].statut = 3; //items(potions)





          do{

            for (int i = 0 ; i < taille ; i++)
            {
                for (int j = 0 ; j < taille ; j++)
                {
                    printf("%c ",map[i][j].statut == 2 ? 'M' : map[i][j].statut == 1 ? '*' : map[i][j].statut == 3 ? 'H': map[i][j].statut == 4 ? '@' : '_' );//conversion des valeurs du tableau en charact�re affichable
                }
                printf("\n");
            }//affichage map.


            //search_personnage(map, perso);
            //choix(playerChoice);

            printf("Deplacement : ZQSD ");


            char PlayerChoice ;
            scanf("%s", &PlayerChoice);

            while (PlayerChoice != 'Z' && PlayerChoice != 'Q' && PlayerChoice != 'S' && PlayerChoice != 'D' && PlayerChoice != 'B' && PlayerChoice != 'F')
            {
                printf("choix incorrect ");
                scanf("%s", &PlayerChoice);
            }

            if(PlayerChoice == 'Z'){

                //printf( "%d" , Joueur.x );

                if(map[ Joueur.x - 1 ][Joueur.y].statut == 4){
                    printf("Ouille tu fonce dans le mur \n");
                }else{

                    map[Joueur.x][Joueur.y].statut = 0 ;
                    Joueur.x = Joueur.x - 1 ;
                    map[Joueur.x][Joueur.y].statut = 1 ;
                    printf( "%c" , map[Joueur.x][Joueur.y].description);
                }
            }

            if(PlayerChoice == 'D'){

                //printf( "%d" , Joueur.x );

                if(map[ Joueur.x][Joueur.y + 1].statut == 4){
                    printf("Ouille tu fonce dans le mur \n");
                }else{

                    map[Joueur.x][Joueur.y].statut = 0 ;
                    Joueur.y = Joueur.y + 1 ;
                    map[Joueur.x][Joueur.y].statut = 1 ;
                    printf( "%c" , map[Joueur.x][Joueur.y].description);
                }
            }

            if(PlayerChoice == 'S'){

                //printf( "%d" , Joueur.x );

                if(map[ Joueur.x + 1][Joueur.y].statut == 4){
                    printf("Ouille tu fonce dans le mur \n");
                }else{

                    map[Joueur.x][Joueur.y].statut = 0 ;
                    Joueur.x = Joueur.x + 1 ;
                    map[Joueur.x][Joueur.y].statut = 1 ;
                    printf( "%c" , map[Joueur.x][Joueur.y].description);
                }
            }


            if(PlayerChoice == 'Q'){

                //printf( "%d" , Joueur.x );

                if(map[ Joueur.x][Joueur.y - 1].statut == 4){
                    printf("Ouille tu fonce dans le mur \n");
                }else{

                    map[Joueur.x][Joueur.y].statut = 0 ;
                    Joueur.y = Joueur.y - 1 ;
                    map[Joueur.x][Joueur.y].statut = 1 ;
                    printf( "%c" , map[Joueur.x][Joueur.y].description);
                }
            }






            //int Tour = deplacement(playerChoice, map, search_personnage(map, perso));
            //map = Tour;

          }while (playerChoice != 'F');

          printf("sdfsdfsd");


        }

}

