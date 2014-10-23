#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;
class Lista{
	public:
	int num;
	Lista *prox;
}; 


void inicia(Lista *LISTA);
int menu(void);
void opcao(Lista *LISTA, int op);
Lista *criaNo();
void insereFim(Lista *LISTA);
void insereInicio(Lista *LISTA);
void exibe(Lista *LISTA);
void libera(Lista *LISTA);


int main(void)
{
	Lista *LISTA = new Lista;
	if(!LISTA){
		cout<<"Sem memoria disponivel!\n";
		exit(1);
	}
	inicia(LISTA);
	int opt;
	
	do{
		opt=menu();
		opcao(LISTA,opt);
	}while(opt);

	delete(LISTA);
	return 0;
}

void inicia(Lista *LISTA)
{
	LISTA->prox = NULL;
}

int menu(void)
{
	int opt;
	
	cout <<"Escolha a opcao\n";
	cout <<"1. Sair\n";
	cout <<"2. Exibir lista\n";
	cout <<"3. Adicionar elemento no inicio\n";
	cout <<"4. Adicionar elemento no final\n";
	cout <<"5. Zerar lista\n";
	cout <<"Opcao: "; 
	cin>>opt;

	
	
	return opt;
}

void opcao(Lista *LISTA, int op)
{
	switch(op){
		case 1:
			libera(LISTA);
			break;
			
		case 2:
			exibe(LISTA);
			break;
		
		case 3:
			insereInicio(LISTA);
			break;
		
		case 4:
			insereFim(LISTA);
			break;		
			
		case 5:
			inicia(LISTA);
			break;
		
		default:
			cout<<"Comando invalido\n\n";
	}
}

int vazia(Lista *LISTA)
{
	if(LISTA->prox == NULL)
		return 1;
	else
		return 0;
}


void insereFim(Lista *LISTA)
{
	Lista *novo = new Lista;
	if(!novo){
		cout<<"Sem memoria disponivel!\n";
		exit(1);
	}
	cout<<"Novo elemento: ";
	cin>>novo->num;

	novo->prox = NULL;
	
	if(vazia(LISTA))
		LISTA->prox=novo;
	else{
		Lista *tmp = LISTA->prox;
		
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		
		tmp->prox = novo;
	}
}

void insereInicio(Lista *LISTA)
{
	Lista *novo= new Lista;
	if(!novo){
		cout<<"Sem memoria disponivel!\n";
		exit(1);
	}
	cout<<"Novo elemento: ";
	cin>> novo->num;
	
	Lista *oldHead = LISTA->prox;
	
	LISTA->prox = novo;
	novo->prox = oldHead;
}

void exibe(Lista *LISTA)
{
	if(vazia(LISTA)){
		cout<<"Lista vazia!\n\n";
		return ;
	}
	
	Lista *tmp;
	tmp = LISTA->prox;
	
	while( tmp != NULL){
		cout<< tmp->num;
		tmp = tmp->prox;
	}
	cout<<"\n\n";
}

void libera(Lista *LISTA)
{
	if(!vazia(LISTA)){
		Lista *proxNode,
			  *atual;
		
		atual = LISTA->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			delete atual;
			atual = proxNode;
		}
	}
}