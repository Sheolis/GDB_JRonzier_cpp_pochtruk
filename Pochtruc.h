#ifndef __POCHTRUC_H_
#define __POCHTRUC_H_

#include <iostream>
#include <vector>
#include <string>

class Pochtruc{
    private:
        std::string _name;
        int _pv;
        int _pvMax;
        int _dmg;
        int _speed;
        int _loveChance;

    public:
        Pochtruc(std::string texte, int pv_amount, int dmg_amount, int speed_amount, int love_stat);
        void attack(Pochtruc& target);
        void print();
        int isAlive();
        std::string get_name();
        void set_name(std::string _name);
        int get_pv();
        void set_pv(int _pv);
        int get_dmg();
        void set_dmg(int _dmg);
        int get_speed();
        void set_speed(int _speed);
        int get_loveChance();
        void set_loveChance(int _loveChance);
        

};



#endif