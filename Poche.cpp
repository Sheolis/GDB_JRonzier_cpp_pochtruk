#include "Poche.h"











////////////////////////////////////////////////////set/get
int Poche::get_qty()
{
    return this->_qty;
}
void Poche::set_qty(int _qty)
{
    this->_qty = _qty;
}


std::vector<Pochtruc *> Poche::get_pochtruc_list()
{
    return this->_pochtruc_list;
}
void Poche::set_pochtruc_list(std::vector<Pochtruc *> _pochtruc_list)
{
    this->_pochtruc_list = _pochtruc_list;
}