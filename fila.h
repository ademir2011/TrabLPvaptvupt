#ifndef _FILA_H_
#define _FILA_H_


#include <iostream>
#include <cstdlib>

class Fila{
	public:
	int info;
	Fila *prox;

	void filavazia();
	void insere (int x);
	void imprime();
	void remover();
};

#endif