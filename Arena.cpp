#include "Arena.h"

Arena::Arena( std::vector<Poche* > list_poche) :
        _poche_list(list_poche) {};
void Arena::gameRun(Poche& poche1, Poche& poche2){
    while(!poche1.isVainquished()){
        
    }
}
void Arena::baston(Pochtruc& oppo1, Pochtruc& oppo2)
{
    int init_1 = oppo1.get_speed();
    int init_2 = oppo2.get_speed();
    while (oppo1.get_pv() > 0 && oppo2.get_pv() > 0){
        if (init_1 < init_2) {
            oppo1.attack(oppo2);
            init_1 += oppo1.get_speed();
        }
        else {
            oppo2.attack(oppo1);
            init_2 += oppo2.get_speed();
        }
    }
    oppo1.print();
    oppo2.print();
}

std::vector<Poche *> Arena::get_poche_list()
    {
        return this->_poche_list;
    }
void Arena::set_poche_list(std::vector<Poche *> _poche_list)
    {
        this->_poche_list = _poche_list;
    }

