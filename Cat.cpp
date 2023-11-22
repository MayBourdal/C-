#include <iostream>
#include "Cat.h"

using namespace std;
Cat cat(5);
Cat::Cat(int abilityI) : Generic(abilityI), Alimento(0), puntaje(0), contador(0)
{
}
int Cat::presentation()
{
    int select;
    cout << "Hola!! Mi nombre es Calita" << endl;
    cout << "Tengo un problema, mi mami dice que tengo el cabus grande y empezo a limitar el alimento de mi platito" << endl;
    cout << "pro esto ando con hambre todo el dia" << endl;
    cout << "Podrias ayudarme a recorrer la casa en busca de comidita??" << endl;
    cout << "1: Vamos a buscarlos" << endl;
    cout << "2: Quiza mas tarde!!" << endl;
    cin >> select;
    return select;
}
void Cat::SumaAlimento()
{
    Alimento++;
    puntaje += 10;
}

void Cat::getPuntaje()
{
    cout << endl;
    cout << "Alimento encontrado: " << Alimento << endl;
    cout << "Puntaje: " << puntaje << endl;
    cout << endl;
}
int Cat::getAlimento()
{
    return Alimento;
}
int Cat::setContador()
{
    return contador++;
}
int Cat::getContador()
{
    return contador;
}