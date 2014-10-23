#ifndef _LISTA_H_
#define _LISTA_H_

struct Lista
{
	int p;
	struct Lista *prox;
};

class Fila{
	int dado;
	Fila *inicio;
	Fila *fim;
};
Fila *prox;


/*
void CriarCaixa(Caixa* fila);
void InserirPNaFila(Caixa* fila, int n);
void RemoverPDaFila(Caixa* fila, int n);
void AdicionarCaixa(Caixa* fila);
void RetirarCaixa(Caixa* fila);
*/

#endif