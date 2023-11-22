#include <iostream>
using namespace std;
#include "Generic.h"
#include "Dog.h"
#include "Cat.h"
#include "Teddy.h"
#include "Game.h"
#include <vector>

void beginningGame(string name, string object)
{
    system("clear");
    system("cls");
    cout << "Gracias por aceptar ayudarme" << endl;
    cout << "Mi casa es muy grande por donde crees que podemos empezar??" << endl;
    cout << "Recuerda que tienes solo 1 opcion de busqueda en cada lugar de la casa" << endl;
    cout << "Selecciona el lugar de la casa por donde empezaremos a buscar:" << endl;
    game(name, object);
}

int Select(int select, string name)
{
    system("clear");
    system("cls");
    int eleccion;
    string object;
    switch (select)
    {
    case 1:
    {

        eleccion = dog.presentation();
        object = "Huesitos";
        if (eleccion == 1)
        {
            beginningGame(name, object);
        }
        else
        {
            cout << "No hay problema aqui estare esperandote";
            beginningGame(name, object);
        }
        break;
    }
    case 2:
    {
        cout << "soy select2" << select;
        eleccion = cat.presentation();
        object = "Croqueta";
        if (eleccion == 1)
        {
            beginningGame(name, object);
        }
        else
        {
            cout << "No hay problema aqui estare esperandote";
            beginningGame(name, object);
        }
        break;
    }
    case 3:
    {
        eleccion = teddy.presentation();
        object = "Birra";
        if (eleccion == 1)
        {
            beginningGame(name, object);
        }
        else
        {
            cout << "No hay problema aqui estare esperandote";
            beginningGame(name, object);
        }
        break;
    }
    default:
        cout << "Tu respuesta no es valida" << endl;
        eleccion = -1;
        break;
    }

    return eleccion;
}

void introduccion(bool noSigue)
{
    string name;
    int answer;
    int select;
    string talk;
    if (noSigue == false)
    {
        cout << "Bienvenid@ al Loli game!" << endl;
        cout << "Podrias decirme tu nombre" << endl;
        cin >> name;
        cout << "Hola " << name << endl;
        cout << "Como estas??" << endl;
        cout << "Te gustaria elegir tu mascota?" << endl;
    }
    else if (noSigue == true)
    {
        cout << "Quieres seleccionar otra mascota??" << endl;
        reset();
    }
    cout << "Selecciona:" << endl;
    cout << "1- Si tu respuesta es SI" << endl;
    cout << "2- Si tu respuesta es No y prefieres seguir charlando " << endl;
    cin >> answer;

    if (answer == 1)
    {
        cout << "Tu puedes elegir" << endl;
        cout << "1: Loli una pequeña y hermosa Perrita " << endl;
        cout << "2: Calita una Gata simpatica y escurridisa" << endl;
        cout << "3: Teddy un osito gordo y birrero" << endl;
        cin >> select;
        Select(select, name);
    }
    else if (answer == 2)
    {
        cout << "Excelente eleccion!!" << endl;
        cout << "Me encata charlar a mi tambien" << endl;
        cout << "Cuentame sobre que te gustaria conversar" << endl;
        cin >> talk;
    }
    else
    {
        cout << "Tu respuesta no es valida" << endl;
    }
}

int main()
{
    introduccion(false);
}