#ifndef _LISTA_H_
#define _LISTA_H_

struct Lista
{
	int pessoasnafila;
	struct Lista *prox;
};

class Fila{
	struct Lista *inicio;
	struct Lista *fim;
};


void CriarCaixa();
void InserirNaFila();
void RemoverDaFila();
void AdicionarCaixa();
void RetirarCaixa();


#endif