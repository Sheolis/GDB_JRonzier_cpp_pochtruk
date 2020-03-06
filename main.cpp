#include "Poche.h"
#include "Pochtruc.h"
#include "Arena.h"


int main()
{
    std::srand(std::time(nullptr));
    Pochtruc arthur= Pochtruc("Bob",10,2,2,50);
    arthur.print();
}