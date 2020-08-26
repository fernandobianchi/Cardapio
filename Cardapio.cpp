#include <iostream>
using namespace std;
int main()
{
	int codigo, quantidade;
	float valor=0;
	char *item;
	cout<<"*** Cardapio ***\n";
	cout<<"100 – Hamburguer – R$5,50\n";
	cout<<"101 – Cachorro-quente – R$4,50\n";
	cout<<"102 – Milkshake – R$7,00\n";
	cout<<"103 – Pizza brotinho – R$8,00\n";
	cout<<"104 - Cheeseburguer – R$8,50\n";
	cout<<"Informe o codigo do seu pedido: ";
	cin>>codigo;
	cout<<"Informe a quantidade desejada: ";
	cin>>quantidade;
	switch(codigo)
	{
		case 100:
			item="Hamburger";
			valor = quantidade * 5.50;
			break;
		case 101:
			item="Cachorro-quente";
			valor = quantidade * 4.50;
			break;
		case 102:
			item="Milkahsake";
			valor = quantidade *7.00;
			break;
		case 103:
			item="Pizza brotinho";
			valor = quantidade * 8.00;
			break;
		case 104:
			item="Cheeseburger";
			valor = quantidade *8.50;
			break;
			default:
				cout<<"Pedido invalido!";		
		
	}
	cout<<quantidade<< "x" <<item<< "=" <<valor;
}
