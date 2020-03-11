typedef struct personnage personnage;

struct personnage
{
    char *name;
    int pv;
    int att;
    int def;
    int x;
    int y;
};




typedef struct carte carte;

struct carte
{
    int statut;
    char description;
};
