#ifndef DOG_H
#define DOG_H
#pragma once
#include "Generic.h"

class Dog : Generic
{
private:
    int object;
    int huesitos;
    int puntaje;
    int contador;

public:
    Dog(int object);
    int presentation();
    void SumaHuesitos();
    void getPuntaje();
    int GetHuesitos();
    int getContador();
    int setContador();
};
extern Dog dog;
#endif