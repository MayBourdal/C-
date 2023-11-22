#ifndef TEDDY_H
#define TEDDY_H
#pragma once
#include "Generic.h"

using namespace std;

class Teddy : Generic
{
private:
    int object;
    int beer;
    int puntaje;
    int contador;

public:
    Teddy(int abilityI);
    int presentation();
    void SumaBeer();
    void getPuntaje();
    int getBeer();
    int getContador();
    int setContador();
};

extern Teddy teddy;
#endif