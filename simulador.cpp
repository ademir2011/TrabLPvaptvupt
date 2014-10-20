#include <iostream>
#include <cstdio>
#include "simulador.h"

using std::cin;
using std::cout;
using std::endl;

void Simulador::recebedados(FILE* fDados)
{
	
	int teste[400];
	int cont = 0, cont2 = 0;

	//variaveis de entrada
	int tmpMax = 0;
	int velmin = 0, velmax = 0;
	int vet[4];


	if (fDados == NULL){ cout<<"Erro ao abrir arquivo!"<<endl; }

	while(!feof(fDados))
	{
		fscanf(fDados, "%i", &teste[cont]);
		cont+=1;
	}
	
	fclose(fDados);

	tmpMax = teste[0];
	velmin = teste[1];
	velmax = teste[2];

	for (int i = 0; i < cont; i++)
	{
		if (i == 0)
		{
			cout<<tmpMax<<endl;
		}
		else if (i == 2)
		{
			cout<<velmin<<" "<<velmax<<endl;
		}
		else if (i > 2)
		{
			cont2+=1;
			cout<<teste[i]<<" ";
			if (cont2 == 3)
			{
				cout<<endl;
				cont2 = 0;
			}
		}
	}
	int x;
	cin>>x;
}