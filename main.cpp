#include <iostream>
#include "simulador.h"
#include <cstdio>


int main()
{	
	bool close = false;

	Simulador simulador;

	FILE *fDadosEntrada, *fDadosSaida;
	fDadosEntrada = fopen("entrada.txt","r");
	fDadosSaida = fopen("saida.txt","w");

	simulador.recebedados(fDadosEntrada);
	simulador.enviandodados(fDadosSaida);

	return 0;
}