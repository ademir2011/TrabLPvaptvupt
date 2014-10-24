#ifndef _LISTA_H_
#define _LISTA_H_

class Lista{
	public:
	int info;	
	Lista *prox;

	void criarlistavazia();
	void insere (int x);
	void imprime();
	void remover(int x);

};


#endif
