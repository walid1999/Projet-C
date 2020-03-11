Void Combat (struct Personnage* player, struct Personnage* Monstre)
{
*player.pv -= *monstre.force;
*monstre.pv -= *player.force;

}
En faisant cela on aura une erreur car il faut ajouter des parenthese

Void Combat (struct Personnage* player, struct Personnage* Monstre)
{
(*player.pv) -= (*monstre).force;
(*monstre.pv) -= (*player).force;
}

