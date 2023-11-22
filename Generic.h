#include <iostream>
#pragma once
using namespace std;
#include "./Generic.h"

class Generic
{
private:
    int age;
    int smell;
    int ability;
    int speed;

public:
    Generic(int abilityI);
    void accion();
};