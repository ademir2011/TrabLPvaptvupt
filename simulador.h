#ifndef _SIMULADOR_H_
#define _SIMULADOR_H_

#define MAX 400

class Simulador
{
	public:
		int tmpMax;
		int velmin;
		int velmax;
		int teste[MAX];

		Simulador();
		void recebedados(FILE* fDadosEntrada);
		void enviandodados(FILE* fDadosSaida);

};

#endif