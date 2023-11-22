#ifndef CAT_H
#define CAT_H
#pragma once
#include "Generic.h"

using namespace std;

class Cat : Generic
{
private:
    int object;
    int Alimento;
    int puntaje;
    int contador;

public:
    Cat(int abilityI);
    int presentation();
    void SumaAlimento();
    void getPuntaje();
    int getAlimento();
    int getContador();
    int setContador();
};

extern Cat cat;
#endif