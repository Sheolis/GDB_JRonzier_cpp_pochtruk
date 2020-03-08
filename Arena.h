#ifndef __ARENA_H_
#define __ARENA_H_

#include <iostream>
#include <vector>
#include <string>
#include "Poche.h"

class Arena{
    private:
        std::vector<Poche* > _poche_list;
    public:
        Arena( std::vector<Poche* > list_poche );
        void baston(Pochtruc&, Pochtruc&);
        void gameRun(Poche&, Poche&);
        std::vector<Poche *> get_poche_list();
        void set_poche_list(std::vector<Poche *> _poche_list);
};
#endif