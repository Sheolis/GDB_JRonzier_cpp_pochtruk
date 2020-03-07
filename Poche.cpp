#include "Poche.h"

Poche::Poche( std::vector<Pochtruc* > list_pochtruc) :
        _pochtruc_list(list_pochtruc) {};









////////////////////////////////////////////////////set/get


std::vector<Pochtruc *> Poche::get_pochtruc_list()
{
    return this->_pochtruc_list;
}
void Poche::set_pochtruc_list(std::vector<Pochtruc *> _pochtruc_list)
{
    this->_pochtruc_list = _pochtruc_list;
}