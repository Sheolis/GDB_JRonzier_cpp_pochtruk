#include "moteur.h"

Moteur::Moteur(std::string texte) : a_temp(0),a_speed(0),a_name(texte)
{};

std::string Moteur::getName()
{
    return a_name;
};void Moteur::setName(std::string newName)
{
    a_name=newName;
};

int Moteur::getTemp()
{
    return a_temp;
};void Moteur::setTemp(int newTemp)
{
    a_temp=newTemp;
};

int Moteur::getSpeed()
{
    return a_speed;
};void Moteur::setSpeed(int newSpeed)
{
    a_speed=newSpeed;
};

void Moteur::acceleration()
{

}

void Moteur::startEngine()
{
    Moteur::acceleration();
};