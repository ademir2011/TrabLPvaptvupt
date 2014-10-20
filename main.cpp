#include <iostream>
#include "simulador.h"
#include <cstdio>


int main()
{	
	bool close = false;

	Simulador simulador;

	while(!close)
	{
		FILE *fDados;
		fDados = fopen("simulador.txt","r");
		
		simulador.recebedados(fDados);
	}
	
	return 0;
}