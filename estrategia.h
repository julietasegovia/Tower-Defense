#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "mapa.h"
#include "nivel.h"

typedef struct Stack_{
    Coordenada *torres;
    int ultimo;
}Pila;

typedef void (*DisposicionTorres)(Nivel*, Mapa*);

void disponer(Nivel* nivel, Mapa* mapa);

void disponer_con_backtracking(Nivel* nivel, Mapa* mapa);

Coordenada* posiciones_validas_backtracking(Coordenada *validas, TipoCasilla **casillas, int alto, int ancho);

static int determinar_posicion_torre_backtracking(int *casilla_elegida, Coordenada *validas);

void disponer_custom(Nivel* nivel, Mapa* mapa);

void pila_desapilar(Pila *pilita);

#endif
