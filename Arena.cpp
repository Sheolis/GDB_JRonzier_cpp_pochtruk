#include "Arena.h"

std::vector<Poche *> Arena::get_poche_list()
    {
        return this->_poche_list;
    }
void Arena::set_poche_list(std::vector<Poche *> _poche_list)
    {
        this->_poche_list = _poche_list;
    }