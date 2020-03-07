#include "Poche.h"
#include "Pochtruc.h"
#include "Arena.h"
#include <ctime>

int main()
{
    std::srand(std::time(nullptr));
    Pochtruc boris = Pochtruc("Boris",10,2,2,80);
    Pochtruc elvis = Pochtruc("Elvis",10,2,2,30);
    Pochtruc is = Pochtruc("Is",10,2,2,30);
    Pochtruc morris = Pochtruc("Morris",10,2,2,30);
    Pochtruc vis = Pochtruc("Vis",10,2,2,30);
    Poche poche_1 = Poche({is, vis});
    for( Pochtruc x : poche_1.get_pochtruc_list())
    {
        x.print() ;
    }
}