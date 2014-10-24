#include <iostream>
#include "lista.h"

using std::cout;
using std::cin;
using std::endl;

Lista *primeiro;
Lista *ultimo;

 void Lista::criarlistavazia(){
	Lista *aux = new Lista;
	primeiro = aux;
	ultimo = primeiro; 
}

void Lista::insere (int x){
	Lista *aux = new Lista;
	aux->info = x;
	ultimo->prox = aux;
	ultimo = ultimo->prox;
	aux->prox = NULL;
}

void Lista::remover(int x){
	Lista *aux;
	Lista *sentinela;
	int fl = 0;
	aux = primeiro->prox;
	sentinela = primeiro;
	while (aux != NULL){
		if(aux->info == x){
			cout<<"Removeu o numero " <<x<<endl;
			sentinela->prox = aux->prox;
			aux = NULL;
			fl = 1;
		}

		else
			aux = aux->prox;
			sentinela = sentinela->prox;
	}
		if (fl == 0)
			cout<<"Numero "<<x<<" nao se encontra na lista"<<endl;
}

void Lista::imprime(){
	Lista *aux;
	aux = primeiro->prox;
	while (aux != NULL){
		cout<<"Numero = "<< aux->info <<endl;
		aux = aux->prox;
	}
}