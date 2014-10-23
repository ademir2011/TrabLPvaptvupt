#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
class Fila{
	public:
	int info;
	Fila *prox;
};

Fila *primeiro;
Fila *ultimo;

void filavazia(){
	Fila *aux = new Fila;
	primeiro = aux;
	ultimo = primeiro;
}

void insere (int x){
	Fila *aux = new Fila;
	aux->info = x;
	ultimo->prox = aux;
	ultimo = ultimo->prox;
	aux->prox = primeiro;

}

void imprime (){
	Fila *aux = primeiro->prox;
	while (aux!=primeiro){
		cout<<"Item = "<< aux->info<<endl;
		aux = aux->prox;
	}
}
void remover(){
	primeiro->prox = (primeiro->prox)->prox;
}


int main (){

int x;
filavazia();
cout<<"digite um numero para adicionar a fila"<<endl;
cin>>x;
insere(x);
cout<<"digite um numero para adicionar a fila"<<endl;
cin>>x;
insere(x);
cout<<""<<endl;
imprime();
cout<<"Removendo um numero da fila"<<endl;
remover();
imprime();
cout<<"digite um numero para adicionar a fila"<<endl;
cin>>x;
insere(x);
imprime();

return 0;	
}