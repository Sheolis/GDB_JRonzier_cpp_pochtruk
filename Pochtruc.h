#ifndef __MOTEUR_H_
#define __MOTEUR_H_

#include <iostream>
#include <vector>
#include <string>

class Moteur{
    private:
        std::string a_name;
        int a_temp;
        int a_speed;
        void acceleration();
    public:
        Moteur(std::string texte);
        std::string getName();
        void setName(std::string newName);
        int getTemp();
        void setTemp(int newTemp);
        int getSpeed();
        void setSpeed(int newSpeed);
        void startEngine();

};



#endif