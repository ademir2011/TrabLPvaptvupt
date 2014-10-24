#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

class Lista{
	public:
	int info;	
	Lista *prox;
};
Lista *primeiro;
Lista *ultimo;

void criarlistavazia(){
	Lista *aux = new Lista;
	primeiro = aux;
	ultimo = primeiro; 
}
void insere (int x){
	Lista *aux = new Lista;
	aux->info = x;
	ultimo->prox = aux;
	ultimo = ultimo->prox;
	aux->prox = NULL;
}

void imprime(){
	Lista *aux;
	aux = primeiro->prox;
	while (aux != NULL){
		cout<<"Numero = "<< aux->info <<endl;
		aux = aux->prox;
	}
}

void remover(int x){
	Lista *aux;
	Lista *sentinela;
	int fl = 0;
	aux = primeiro->prox;
	sentinela = primeiro;
	while (aux != NULL){
		if(aux->info == x){
			cout<<"REMOVEU O NUMERO " <<x<<endl;
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
int main (){
	
int x;
criarlistavazia();
cout<<"digite um numero para adicionar a lista"<<endl;
cin>>x;
insere(x);
cout<<"digite um numero para adicionar a lista"<<endl;
cin>>x;
insere(x);
cout<<""<<endl;
imprime();
cout<<"Digite um numero para remover da lista"<<endl;
cin>>x;
remover(x);
imprime();
cout<<"digite um numero para adicionar a lista"<<endl;
cin>>x;
insere(x);
imprime();
return 0;	
}