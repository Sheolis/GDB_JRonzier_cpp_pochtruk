#ifndef __ARENA_H_
#define __ARENA_H_

#include <iostream>
#include <vector>
#include <string>
#include "Poche.h"

class Arena{
    private:
        std::vector<Poche *> _poche_list;
    public:
        Arena();
        void fight();
        void poche_creation();
        std::vector<Poche *> get_poche_list();
        void set_poche_list(std::vector<Poche *> _poche_list);
};
#endif