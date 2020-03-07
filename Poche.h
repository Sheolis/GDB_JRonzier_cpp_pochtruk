#ifndef __POCHE_H_
#define __POCHE_H_

#include <iostream>
#include <vector>
#include <string>
#include "Pochtruc.h"

class Poche{
    private:
        std::vector<Pochtruc* > _pochtruc_list;
        void _print_poche();
    public:
        Poche(int number, std::vector<Pochtruc*> list_pochtruc);
        
        std::vector<Pochtruc *> get_pochtruc_list();
        void set_pochtruc_list(std::vector<Pochtruc* > _pochtruc_list);
        void choice();
        void pochtruc_generator();
};

#endif