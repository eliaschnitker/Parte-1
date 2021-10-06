#include <iostream>
#include <stdlib.h>
using namespace std;

// Necesitamos todas las funciones:
/* Funcion Posicion: No entiendo que tiene que dar*/
/*Funcion Masa:
    distribucion normal
    Media: 10^21
    Desviacion tipica: 10^15
*/
int MasaObjeto(){

}

/*Función Fuerza Gravitatoria:
    masas de objetos
    posiciones de objetos
    devuelve: array de fuerzas*/

int FuerzaGravitatoria(){

}

/* Funcion aceleracion:
    masa objeto
    fuerza de objeto
    devuelve: array de aceleraciones
*/
int AceleracionObjeto(){

}

/* Funcion velocidad:
    aceleracion
    tiempo
    devuelve: array de velocidad
*/
int VelocidadObjeto(){

}

/* Funcion posicion:
    velocidad
    tiempo
    devuelve: array de posiciones
*/
int PosicionObjeto(){

}

/* Funcion efecto rebote:
    si alguna de las coodenadas es < 0, la coordenada =0
    si alguna de las coordenadas es > tamaño del cubo, la coordenada = tamañao
    No devuelve nada
*/
void EfectoReboteObjeto(){

}

/* Funcion  colision:
    masas de objetos
    velocidad de objetos
    devuelve: un nuevo objeto
*/
int ColisionObjetos(){

}


int main(int argc, char **argv) {
    /*El usuario debe introducir los siguientes datos:
        numero de objetos: num_objetos
        numero de interacciones/intervalos:  num_iteracciones
        semilla
        tamaño del recinto (tam*tam*tam): tam_recinto
        paso del tiempo/tiempo de cada intervalo:paso_tiempo
        quiero igualar los parametros a argv[1], argv[2]... pero NO ME DEJAAA
        int num_objetos;
        int num_iteracciones;
        int semilla;
        int tam_recinto;
        int paso_tiempo;
     */
    int num_objetos;
    int num_iteracciones;
    int semilla;
    int tam_recinto;
    int paso_tiempo;


    // Excepcion: faltan parametros o sobran parametro

    if (argc != 5) {
        cerr<<"No hay el numero suficiente de variables";
        return -2;
    }
}

