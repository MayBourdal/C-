#include <iostream>
#include "Teddy.h"

using namespace std;
Teddy teddy(5);
Teddy::Teddy(int object) : Generic(object), beer(0), puntaje(0), contador(0)
{
}
int Teddy::presentation()
{
    int select;
    cout << "Hola mi nombre es Teddy" << endl;
    cout << "Gracias por elegirme" << endl;
    cout << "Te cuento, mi Abuelita y yo compartimos el mismo gusto y amor por la cerveza" << endl;
    cout << "Pero ella tiene plata y las puede comprar y yo solo me puedo tomar las suyas porque no las puedo comprar" << endl;
    cout << "El problema es que mi abuela esconde sus cervezas por diferentes rincones de la casa para que yo" << endl;
    cout << "no las encuentre" << endl;
    cout << "Solo necesito encontrar 6 para ser feliz hoy" << endl;
    cout << "1: Vamos a buscarlos" << endl;
    cout << "2: Quiza mas tarde!!" << endl;
    cin >> select;
    return select;
}
void Teddy::SumaBeer()
{
    beer++;
    puntaje += 10;
}

void Teddy::getPuntaje()
{
    cout << endl;
    cout << "Cevecitas encontradas: " << beer << endl;
    cout << "Puntaje: " << puntaje << endl;
    cout << endl;
}
int Teddy::getBeer()
{
    return beer;
}
int Teddy::setContador()
{
    return contador++;
}
int Teddy::getContador()
{
    return contador;
}