#include "Poche.h"
#include "Pochtruc.h"
#include "Arena.h"
#include <ctime>

int main()
{
    std::srand(std::time(nullptr));
    Pochtruc boris = Pochtruc("Boris",10,2,2,80);
    Pochtruc smis = Pochtruc("Smis",10,2,2,80);
    Pochtruc varis = Pochtruc("Varis",10,2,2,80);
    Pochtruc teddismis = Pochtruc("Teddismis",10,2,2,80);
    Pochtruc artemis = Pochtruc("Artemis",10,2,2,80);
    Pochtruc elvis = Pochtruc("Elvis",10,2,2,30);
    Pochtruc is = Pochtruc("Is",10,2,2,30);
    Pochtruc morris = Pochtruc("Morris",10,2,2,30);
    Pochtruc vis = Pochtruc("Vis",10,2,2,30);
    Pochtruc ulis = Pochtruc("Ulis",10,2,2,80);
    Pochtruc bichis = Pochtruc("Bichis",10,2,2,80);
    Pochtruc mankenpis = Pochtruc("Mankenpis",10,2,2,80);
    Poche poche_1 = Poche("Joueur 1", {&boris, &smis, &varis, &teddismis, &artemis, &elvis});
    Poche poche_2 = Poche("Joueur 2", {&is, &morris, &vis, &ulis, &bichis, &mankenpis});
    Arena arene = Arena({&poche_1, &poche_2});

    for( Pochtruc* x : poche_1.get_pochtruc_list() )
    {
        x->print() ;
    }
}