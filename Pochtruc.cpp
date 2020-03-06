#include "Pochtruc.h"

Pochtruc::Pochtruc(std::string texte, int pv_amount, int dmg_amount, int speed_amount, int love_stat) : 
    _name(texte),_pv(pv_amount),_pvMax(pv_amount),_dmg(dmg_amount),_speed(speed_amount),_loveChance(love_stat)
    {};


void Pochtruc::attack(std::string target_name){

}


void Pochtruc::print(){
    std::cout << "Pochtruc : " << _name << std::endl \
        << "Pv : " << _pv << std::endl \
        << "Damages : " << _dmg << std::endl\
        << "Speed : " << _speed << std::endl\
        << "love stat : " << _loveChance << "%" << std::endl;
}

void Pochtruc::attack(Pochtruc& target){
    int roll = (std::rand() % 100) + 1;
    if ( roll > _loveChance)
    {
        target.set_pv(target.get_pv - _dmg);
    }else
    {
        target.set_pv(target.get_pv + _dmg);
    }
    if (_pv > _pvMax)
    {
        _pv = _pvMax;
    }
    
}


////////////////////////////////////////////////////set/get
std::string Pochtruc::get_name()
{
    return this->_name;
}
void Pochtruc::set_name(std::string _name)
{
    this->_name = _name;
}


int Pochtruc::get_pv()
{
    return this->_pv;
}
void Pochtruc::set_pv(int _pv)
{
    this->_pv = _pv;
}


int Pochtruc::get_dmg()
{
    return this->_dmg;
}
void Pochtruc::set_dmg(int _dmg)
{
    this->_dmg = _dmg;
}

int Pochtruc::get_speed()
{
    return this->_speed;
}
void Pochtruc::set_speed(int _speed)
{
    this->_speed = _speed;
}


int Pochtruc::get_loveChance()
{
    return this->_loveChance;
}
void Pochtruc::set_loveChance(int _loveChance)
{
    this->_loveChance = _loveChance;
}