#include <iostream>
#include <cstdlib>
#include "fila.h"
using std::cout;
using std::cin;
using std::endl;


int main (){

Fila fila;
int x;
fila.filavazia();
cout<<"digite um numero para adicionar a fila"<<endl;
cin>>x;
fila.insere(x);
cout<<"digite um numero para adicionar a fila"<<endl;
cin>>x;
fila.insere(x);
cout<<""<<endl;
fila.imprime();
cout<<"Removendo um numero da fila"<<endl;
fila.remover();
fila.imprime();
cout<<"digite um numero para adicionar a fila"<<endl;
cin>>x;
fila.insere(x);
fila.imprime();

return 0;	
}