#include "Poche.h"

Poche::Poche(std::string text, std::vector<Pochtruc* > list_pochtruc) :
        _name(text), _pochtruc_list(list_pochtruc) {};

int Poche::isVainquished() {
    for( Pochtruc* x : (*this).get_pochtruc_list() )
    {
        if (x->isAlive()) {
            return 0;
        }
    }
    std::cout << (*this).get_name() << "is deafeated" << std::endl ;
    return 1;
}







////////////////////////////////////////////////////set/get


std::vector<Pochtruc *> Poche::get_pochtruc_list()
{
    return this->_pochtruc_list;
}
void Poche::set_pochtruc_list(std::vector<Pochtruc *> _pochtruc_list)
{
    this->_pochtruc_list = _pochtruc_list;
}

std::string Poche::get_name()
{
    return this->_name;
}
void Poche::set_name(std::string _name)
{
    this->_name = _name;
}