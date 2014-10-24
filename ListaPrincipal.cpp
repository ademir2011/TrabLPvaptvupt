#include <iostream>
#include <cstdlib>
#include "lista.h"
using std::cout;
using std::cin;
using std::endl;




int main (){

Lista lista;

int x;
lista.criarlistavazia();
cout<<"digite um numero para adicionar a lista"<<endl;
cin>>x;
lista.insere(x);
cout<<"digite um numero para adicionar a lista"<<endl;
cin>>x;
lista.insere(x);
cout<<""<<endl;
lista.imprime();
cout<<"Digite um numero para remover da lista"<<endl;
cin>>x;
lista.remover(x);
lista.imprime();
cout<<"digite um numero para adicionar a lista"<<endl;
cin>>x;
lista.insere(x);
lista.imprime();
return 0;	
}