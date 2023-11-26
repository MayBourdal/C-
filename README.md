      Programacion en C++               
                        **** Loli Game****

                  *****Explicación del juego*****
      El juego está enfocado a niños, es una aventura de texto donde en principio el jugador tiene que seleccionar su mascota,
      puede hacer esto o continuar charlando en la consola(esa parte no esta al 100x100 desarrollada pero la idea era agregarle otra opción antes de empezar a jugar)... 
      una vez que selecciona a su mascota, sigue con la presentación del personaje elegido, luego de esto comienza el juego, donde deberán recorrer la casa en busqueda
      6 objetos, el juego termina cuando se recorrieron los 6 lugares de la casa. Sera ganador el jugador que encuentre todos los objetos perdidos de su mascota, 
      en caso de haber llegado a recorrer todas las habitaciones y no haber completado los 60 puntos, el jugador pierde pero siempre puede volver a intentarlo 
      o probar suerte con otra mascota.


                *******Código*******
      El código se divide en 3 partes:
Play.cpp: En esta podemos encontrar la función main y 3 funciones más que serán la introducción al juego, la explicación y 
una función selectora donde derivará el código para las diferentes mascotas 
Game.cpp: Aquí encontraremos el desarrollo del juego, donde se encargará de recorrer cada habitación de la casa y encontrar 
o no los objetos de las mascotas, también tenemos una función continuar() la cual se llama cada vez que el jugador elige una de 
las opciones en búsqueda de los objetos, esto es para dar la posibilidad de volver al menu y la funcion Opciones() trabaja con el
vector opcionesSeleccionada yn código ternario para por cada opción. 
Luego tenemos 4 clases: Una clase madre Generica.h, y tres clases hijas que llevan el nombre de Dog.h, Cat.h y Teddy.h en cada uno 
de sus módulos .cpp encontraremos su saludo particular, sus funciones necesarias para llevar la cuenta de los objetos encontrados, 
setearlos y devolver dichas variables. 
      

