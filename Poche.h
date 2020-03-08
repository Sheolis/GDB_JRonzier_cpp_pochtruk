#ifndef __POCHE_H_
#define __POCHE_H_

#include <iostream>
#include <vector>
#include <string>
#include "Pochtruc.h"

class Poche{
    private:
        std::string _name;
        std::vector<Pochtruc* > _pochtruc_list;
        void _print_poche();
    public:
        Poche( std::string text, std::vector<Pochtruc*> list_pochtruc);
        
        std::string get_name();
        void set_name(std::string _name);
        std::vector<Pochtruc *> get_pochtruc_list();
        void set_pochtruc_list(std::vector<Pochtruc* > _pochtruc_list);
        int isVainquished();
        void pochtruc_generator();
};

#endif