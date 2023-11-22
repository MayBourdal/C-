#include <iostream>
using namespace std;
#include "Generic.h"
#include "Dog.h"
#include "Cat.h"
#include "Teddy.h"
#include "Play.h"
#include <vector>

vector<bool> opcionesSeleccionadas(7, false);

void game(string name, string object);

void continuar(string name, string object)
{
    bool noSigue = false;
    int sigue;
    cout << "Deseas seguir buscando" << endl;
    cout << "1:Seguimos" << endl;
    cout << "2:Volver al menu" << endl;
    cin >> sigue;
    if (sigue == 1)
    {
        cout << "Vaaamoss por maaas!!!" << endl;
        game(name, object);
    }
    else
    {
        noSigue = true;
        introduccion(noSigue);
    }
}
void reset()
{
    for (int i = 0; i < opcionesSeleccionadas.size(); ++i)
    {
        opcionesSeleccionadas[i] = false;
    }
}

int Opciones(string name, string object)
{
    (opcionesSeleccionadas[1] == false) ? cout << "1: Mi Habitacion " << endl : cout << "1: Mi Habitacion/No disponible" << endl;
    (opcionesSeleccionadas[2] == false) ? cout << "2: El Parque " << endl : cout << "2: El Parque/No disponible" << endl;
    (opcionesSeleccionadas[3] == false) ? cout << "3: La Cocina" << endl : cout << "3: La Cocina/No disponible" << endl;
    (opcionesSeleccionadas[4] == false) ? cout << "4: El Baño" << endl : cout << "4: El Baño/No disponible" << endl;
    (opcionesSeleccionadas[5] == false) ? cout << "5: El Living" << endl : cout << "5: El Living/No disponible" << endl;
    (opcionesSeleccionadas[6] == false) ? cout << "6: El Garage" << endl : cout << "6: El Garage/No disponible" << endl;
    cout << "7:Volver al Menu" << endl;
    int select;
    cin >> select;
    if (opcionesSeleccionadas[select])
    {
        cout << "Esa opción ya ha sido seleccionada. Elige otra." << endl;
        game(name, object);
    }
    opcionesSeleccionadas[select] = true;

    return select;
}

void Habitacion(string name, string object)
{
    system("clear");
    system("cls");
    int cantidad;
    int select;
    int contador;

    int ob = (object == "Huesitos") ? 1 : (object == "Croqueta") ? 2
                                                                 : 3;
    cout << endl;
    cout << "Excelente eleccion " << name << endl;
    cout << "Yo ya busque por aqui pero no encontre nada" << endl;
    cout << "Pero no busque dentro del armario, ni abajo de la cama, sobre la cama tampoco, " << endl;
    cout << "y ahi en ese cajon de mis juguetes menos" << endl;
    cout << "Que dices? Donde puede estar mi " << object << endl;
    cout << "Selecciona:" << endl;
    cout << "1:Armario" << endl;
    cout << "2:Abajo de la cama" << endl;
    cout << "3:Sobre la cama" << endl;
    cout << "4:En mi cajon de juguetes" << endl;
    cin >> select;
    cout << endl;
    switch (select)
    {
    case 1:
        if (ob == 1)
        {
            cout << endl;
            cout << "Oooh mi huesito no esta aqui" << endl;
            cout << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << endl;
            cout << "Oooh miraaa!!" << endl;
            cout << "Pollitoo...Genial ya estaba muriendo de hambre =)" << endl;
            cout << "Busquemos si encontramos algo mas" << endl;
            cout << endl;
            cat.SumaAlimento();
            cat.getPuntaje();
            cat.setContador();
            cantidad = cat.getAlimento();
            contador = cat.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido que mi pancita quede satisfecha" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 3)
        {
            cout << endl;
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            cout << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 2:
        if (ob == 1)
        {
            cout << endl;
            cout << "Oooh mi huesito no esta aqui" << endl;
            cout << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << endl;
            cout << "No hay nada por aqui" << endl;
            cout << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << endl;
            cout << "Increible, algunos tienen un 'AS' bajo la manga y mi abuela tiene birra bajo la cama" << endl;
            cout << endl;
            teddy.SumaBeer();
            teddy.getPuntaje();
            teddy.setContador();
            cantidad = teddy.getBeer();
            contador = teddy.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar mi ración diaria de birrita" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        break;
    case 3:
        if (ob == 1)
        {
            cout << endl;
            cout << "Oooh mi huesito no esta aqui" << endl;
            cout << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << endl;
            cout << "No hay nada por aqui" << endl;
            cout << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << endl;
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            cout << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 4:
        if (ob == 1)
        {
            cout << endl;
            cout << "Esoo? eso es mi huesito rojo?" << endl;
            cout << "Esta tiene que haber sido mi abuelita siempre anda limpiado y sacando mis juguetes" << endl;
            cout << "de los lugares estrategicos que los dejo, si entiendo que dejar mi huesito en el medio del " << endl;
            cout << "pasillo no queda comodo, pero si tiene voluntad lo puede esquivar" << endl;
            cout << endl;
            dog.SumaHuesitos();
            dog.getPuntaje();
            dog.setContador();
            cantidad = dog.GetHuesitos();
            contador = dog.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar todos mis huesitos" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 2)
        {
            cout << endl;
            cout << "No hay nada por aqui" << endl;
            cout << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << endl;
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            cout << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    default:
        cout << endl;
        cout << "Opcion no disponible";
        cout << endl;
        continuar(name, object);
        break;
    }
}

void Cocina(string name, string object)
{
    system("clear");
    system("cls");
    int select;
    int ob = (object == "Huesitos") ? 1 : (object == "Croqueta") ? 2
                                                                 : 3;
    int cantidad;
    int contador;
    cout << endl;
    cout << "La cocina cllaarroo!!" << endl;
    cout << "Excelente lugar para encontrar " << object << endl;
    cout << "Selecciona:" << endl;
    cout << "1:Heladera" << endl;
    cout << "2:Horno" << endl;
    cout << "3:Bajo mesada" << endl;
    cout << "4:Alacena" << endl;
    cin >> select;
    cout << endl;
    switch (select)
    {
    case 1:
        if (ob == 1)
        {
            cout << endl;
            cout << "Oooh mi huesito no esta aqui" << endl;
            cout << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << endl;
            cout << "No hay nada por aqui" << endl;
            cout << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << endl;
            cout << "Matangaaa" << endl;
            cout << "Cervecita friaa!! " << endl;
            cout << "Y sii, podra ser astuta la abuelita, pero quien no guardaria una cerveza en la heladera" << endl;
            cout << endl;
            teddy.SumaBeer();
            teddy.getPuntaje();
            teddy.setContador();
            cantidad = teddy.getBeer();
            contador = teddy.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << endl;
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar mi ración diaria de birrita" << endl;
                cout << "*********************************" << endl;
                cout << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << endl;
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        break;
    case 2:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "Oooh miraaa!!" << endl;
            cout << "Sobras de pizza, Geniial" << endl;
            cout << "Busquemos si encontramos algo mas" << endl;
            cat.SumaAlimento();
            cat.getPuntaje();
            cat.setContador();
            cantidad = cat.getAlimento();
            contador = cat.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido que mi pancita quede satisfecha" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 3:
        if (ob == 1)
        {
            cout << "Ahora lo recuerdo" << endl;
            cout << "Me habia parecido genial idea esconder de mi hermana aqui mi huesito rosa" << endl;
            cout << "Gracias por encontrarlo" << endl;
            cout << endl;
            dog.SumaHuesitos();
            dog.getPuntaje();
            dog.setContador();
            cantidad = dog.GetHuesitos();
            contador = dog.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar todos mis huesitos" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 4:
        if (ob == 1)
        {
            cout << "Mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    default:
        cout << "Opcion no disponible";
        continuar(name, object);
        break;
    }
}

void Parque(string name, string object)
{
    system("clear");
    system("cls");
    int select;
    int cantidad;
    int contador;
    string dice;
    int ob = (object == "Huesitos") ? 1 : (object == "Croqueta") ? 2
                                                                 : 3;
    cout << "Amo este parque, esa pared de alla envuelta de jazmines le dan el toque " << endl;
    cout << "QUe dices?? por donde buscamos?? " << endl;
    cout << "Selecciona:" << endl;
    cout << "1:Huerta" << endl;
    cout << "2:Casita del arbol" << endl;
    cout << "3:Entre los jazmines" << endl;
    cout << "4:En el asador" << endl;
    cin >> select;
    switch (select)
    {
    case 1:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 2:
        if (ob == 1)
        {
            cout << "Sii ahora lo recuerdoo, vinimos con mi prima aqui a la casita, estuvimos jugando la cocinita" << endl;
            cout << "Luego nos llamaron nuestros amigos del barrio para ir a jugar a la mancha patalarga y olvide " << endl;
            cout << "mi huesto personal aqui dentro... pensaras que soy una Loli despistada" << endl;
            dog.SumaHuesitos();
            dog.getPuntaje();
            dog.setContador();
            cantidad = dog.GetHuesitos();
            contador = dog.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar todos mis huesitos" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 3:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Que es eso rojo entre los jazmines?" << endl;
            cout << "Le quitare esas hojas" << endl;
            cout << "Unos segundos mas tarde..." << endl;
            cout << "NO PUEDO CREER LO QUE VEN MIS OJOS!!" << endl;
            cout << "JAJAJA Abuelita esta vez si que te pasaste!! " << endl;
            cout << "Mira " << name << ", A quien se le puede ocurrir esconder una heladerita de camping" << endl;
            cout << "llena de cerveza en el jardin" << endl;
            cout << "Tomare dos y dejare todo como estaba, si se entera que la descubri va a cambiar de escondite" << endl;
            cout << "Saque una para ti y otra para mi, pero primero dime tu eres mayor de edad?" << endl;
            cin >> dice;
            cout << "No se si creerte, mejor me tomare ambas" << endl;
            teddy.SumaBeer();
            teddy.getPuntaje();
            teddy.setContador();
            cantidad = teddy.getBeer();
            contador = teddy.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar mi ración diaria de birrita" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        break;
    case 4:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "Siii!!" << endl;
            cout << "Sobras de asado, esto es genial" << endl;
            cout << "Quieres probar??" << endl;
            cin >> dice;
            cout << "Tarde ya me comi todo =)" << endl;
            cout << "Sigamos buscando, prometo convidarte la proxima" << endl;
            cat.SumaAlimento();
            cat.getPuntaje();
            cat.setContador();
            cantidad = cat.getAlimento();
            contador = cat.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido que mi pancita quede satisfecha" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    default:
        cout << "Opcion no disponible";
        break;
    }
}

void Toilete(string name, string object)
{
    system("clear");
    system("cls");
    int select;
    int cantidad;
    int contador;
    int ob = (object == "Huesitos") ? 1 : (object == "Croqueta") ? 2
                                                                 : 3;
    cout << "Quen esconderia " << object << " en el baño??" << endl;
    cout << "Pero bueno, ya estamos aqui busquemos" << endl;
    cout << "Selecciona:" << endl;
    cout << "1:Armario" << endl;
    cout << "2:Bañera" << endl;
    cout << "3:Detras del inodoro" << endl;
    cout << "4:Sobre el lavamanos" << endl;
    cin >> select;
    switch (select)
    {
    case 1:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada comestible por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 2:
        if (ob == 1)
        {
            cout << "Jaja claro que despistada, ayer tome un baño de tina con este huesito azul " << endl;
            cout << "me debo haber olvidado de llevarlo conmigo" << endl;
            dog.SumaHuesitos();
            dog.getPuntaje();
            dog.setContador();
            cantidad = dog.GetHuesitos();
            contador = dog.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar todos mis huesitos" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 3:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Ay Ay mi Abuelita no deja de sorprenderme" << endl;
            cout << "Lo bueno es que aun permanece fria esta cerveza" << endl;
            teddy.SumaBeer();
            teddy.getPuntaje();
            teddy.setContador();
            cantidad = teddy.getBeer();
            contador = teddy.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar mi ración diaria de birrita" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        break;
    case 4:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "Siii con que aca dejo mi Mamá el sandwich que le sobro anoche" << endl;
            cat.SumaAlimento();
            cat.getPuntaje();
            cat.setContador();
            cantidad = cat.getAlimento();
            contador = cat.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido que mi pancita quede satisfecha" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    default:
        cout << "Opcion no disponible";
        continuar(name, object);
        break;
    }
}

void Living(string name, string object)
{
    system("clear");
    system("cls");
    int select;
    int cantidad;
    int contador;
    int ob = (object == "Huesitos") ? 1 : (object == "Croqueta") ? 2
                                                                 : 3;
    cout << "🎵Buscaremos Buscaremos algo encontraremos🎵" << endl;
    cout << "AAAh es tan bonito mi living" << endl;
    cout << "Que dices? por donde buscamos" << object << endl;
    cout << "Selecciona:" << endl;
    cout << "1:Debajo del sillon" << endl;
    cout << "2:Debajo de la Alfombra" << endl;
    cout << "3:Dentro del chifonier" << endl;
    cout << "4:Dentro de mi cama(Si tambien tengo una cama en el living, no me mires asi)" << endl;
    cin >> select;
    switch (select)
    {
    case 1:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "Nuuu vinimo buscando cobre y encontramos oro" << endl;
            cout << "Una atunciiitoo" << endl;
            cout << "Sabra dios cuando cayo esta lata abajo del sillon pero yo no se leer fechas de vencimiento" << endl;
            cout << "Asique vengaa pa mi pancita" << endl;
            cat.SumaAlimento();
            cat.getPuntaje();
            cat.setContador();
            cantidad = cat.getAlimento();
            contador = cat.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido que mi pancita quede satisfecha" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 2:
        if (ob == 1)
        {
            cout << "Sip predecible, tipica idea mia!!" << endl;
            cout << "Me aplaudo, hubiese sido imposble encontrar mi huesito verde sin tu ayuda" << endl;
            dog.SumaHuesitos();
            dog.getPuntaje();
            dog.setContador();
            cantidad = dog.GetHuesitos();
            contador = dog.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar todos mis huesitos" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 3:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Y si Abuelita en esta estubiste predecible, de verdad te parecio buena idea guardad las birras en el chifonier??" << endl;
            teddy.SumaBeer();
            teddy.getPuntaje();
            teddy.setContador();
            cantidad = teddy.getBeer();
            contador = teddy.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar mi ración diaria de birrita" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        break;
    case 4:
        if (ob == 1)
        {
            cout << "Claro que no esta aqui, utilizo frecuentemente esta cama" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    default:
        cout << "Opcion no disponible";
        continuar(name, object);
        break;
    }
}

void Garage(string name, string object)
{
    system("clear");
    system("cls");
    int select;
    int cantidad;
    int contador;
    int ob = (object == "Huesitos") ? 1 : (object == "Croqueta") ? 2
                                                                 : 3;
    cout << "Este lugar no me gusta para nada" << name << endl;
    cout << "Es frio y no me fio de ese coche de alla, hay veces que me lleva a pasear y la pasamos bonito";
    cout << "Pero otras tantas me lleva derecho a la puerta de la veterinaria" << endl;
    cout << "Que dices? Encontraremos algo aqui??" << endl;
    cout << "Selecciona:" << endl;
    cout << "1:Dentro del auto" << endl;
    cout << "2:Debajo del auto" << endl;
    cout << "3:En ese placard de alli" << endl;
    cout << "4:En esa caja" << endl;
    cin >> select;
    switch (select)
    {
    case 1:
        if (ob == 1)
        {
            cout << "Clarooo, pense que nos ibamos a la placita, subi contenta con mi hueso al auto" << endl;
            cout << "Y como te conte el muy traicionero me dejo ahi, en mi peor pesadilla" << endl;
            cout << "Me baje tan indignada cuando volvimos a casa que olvide mi huesito amarillo aqui" << endl;
            dog.SumaHuesitos();
            dog.getPuntaje();
            dog.setContador();
            cantidad = dog.GetHuesitos();
            contador = dog.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar todos mis huesitos" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 2)
        {
            cout << "Esto es lo que yo creo??" << endl;
            cout << "A ver vooy a probar un pedacito" << endl;
            cout << "Siii son papitas de Mc Donals, siempre ricas nunca inricas" << endl;
            cat.SumaAlimento();
            cat.getPuntaje();
            cat.setContador();
            cantidad = cat.getAlimento();
            contador = cat.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido que mi pancita quede satisfecha" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 2:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 3:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Mi abuela si que sabe esconder sus cervezas, aqui tampoco estan" << endl;
            teddy.setContador();
            continuar(name, object);
        }
        break;
    case 4:
        if (ob == 1)
        {
            cout << "Oooh mi huesito no esta aqui" << endl;
            dog.setContador();
            continuar(name, object);
        }
        else if (ob == 2)
        {
            cout << "No hay nada por aqui" << endl;
            cat.setContador();
            continuar(name, object);
        }
        else if (ob == 3)
        {
            cout << "Y sii como no tener todo un stock de su bebida preferida" << endl;
            cout << "con que de esta caja desparramas hacia el resto de las habitaciones Abuelita";
            teddy.SumaBeer();
            teddy.getPuntaje();
            teddy.setContador();
            cantidad = teddy.getBeer();
            contador = teddy.getContador();
            if (cantidad == 6 && contador == 6)
            {
                cout << "*********************************" << endl;
                cout << "Has ganado la partida!!" << endl;
                cout << "Feliiiciitacioooneess eres brillantee has conseguido encontrar mi ración diaria de birrita" << endl;
                cout << "*********************************" << endl;
                reset();
                introduccion(true);
            }
            else if (contador == 6 && cantidad > 6)
            {
                cout << "*********************************" << endl;
                cout << "Lo siento la patida a terminado y no has encontrado la suficiente comidita =(" << endl;
                cout << "Pero ey este no es el final puedes volver a intentarlo las veces que quieras" << endl;
                reset();
                introduccion(true);
            }
            else
            {
                continuar(name, object);
            }
        }
        break;
    default:
        cout << "Opcion no disponible";
        continuar(name, object);
        break;
    }
}

void game(string name, string object)
{
    int select = Opciones(name, object);
    switch (select)
    {
    case 1:
        Habitacion(name, object);
        break;
    case 2:
        Parque(name, object);
        break;
    case 3:
        Cocina(name, object);
        break;
    case 4:
        Toilete(name, object);
        break;
    case 5:
        Living(name, object);
        break;
    case 6:
        Garage(name, object);
        break;
    case 7:
        introduccion(true);
    default:
        cout << "No es una opcion valida, vuelva a intentarlo" << endl;
        break;
    }
}