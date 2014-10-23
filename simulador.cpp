#include <iostream>
#include <cstdio>
#include "simulador.h"

using std::cin;
using std::cout;
using std::endl;

Simulador::Simulador()
{
	tmpMax = 0;
	velmin = 0;
	velmax = 0;

	for (int i = 0; i < MAX; i++)
		teste[i]=0;
}

void Simulador::recebedados(FILE* fDadosEntrada)
{
	int cont = 0;

	//verifica se o arquivo foi aberto com sucesso
	if (fDadosEntrada == NULL){ cout<<"Erro ao abrir arquivo!"<<endl; }

	//atribui ao vetor teste todos os valores inteiros
	while(!feof(fDadosEntrada))
	{
		if (cont == 0)
			fscanf(fDadosEntrada, "%i", &tmpMax);
		else if(cont == 1)
			fscanf(fDadosEntrada, "%i", &velmin);
		else if(cont == 2)
			fscanf(fDadosEntrada, "%i", &velmax);
		else
			fscanf(fDadosEntrada, "%i", &teste[cont-3]);
		cont+=1;
	}
	
	//fecha o arquivo de entrada
	fclose(fDadosEntrada);
}

void Simulador::enviandodados(FILE* enviandodados)
{
	int contadorMAX = 10;
	int testedados[10] = {10,9,8,7,6,5,4,3,2,1}; 
	int i = 0;

	while(i < contadorMAX)
	{
		if (i%2==0)
			fprintf(enviandodados, "\n");
		fprintf(enviandodados, "%i\t", testedados[i]);
		i++;
	}

	fclose(enviandodados);
}