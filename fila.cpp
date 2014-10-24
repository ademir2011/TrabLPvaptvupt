#include <iostream>
#include "fila.h"
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


Fila *primeiro;
Fila *ultimo;

void Fila::filavazia(){
	Fila *aux = new Fila;
	primeiro = aux;
	ultimo = primeiro;
}

void Fila::insere (int x){
	Fila *aux = new Fila;
	aux->info = x;
	ultimo->prox = aux;
	ultimo = ultimo->prox;
	aux->prox = primeiro;

}

void Fila::imprime (){
	Fila *aux = primeiro->prox;
	while (aux!=primeiro){
		cout<<"Item = "<< aux->info<<endl;
		aux = aux->prox;
	}
}

void Fila::remover(){
	primeiro->prox = (primeiro->prox)->prox;
}