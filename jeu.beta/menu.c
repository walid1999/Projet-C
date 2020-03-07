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
            system("pause");
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
            char prenom[20] = {0};
            printf("Entrez votre prenom : ");
            scanf("%s",&prenom);
            printf("\nBonjour %s, \nBienvenue dans le RPG ", prenom);
        }
}
