//Criar um programa que receba um n�mero que corresponda a um m�s do 1� trimestre e escreva o m�s
//correspondente; caso o usu�rio digite o n�mero fora do intervalo dever� aparecer inv�lido, mas utilizando
//uma fun��o do tipo void.

#include <cstdlib>
#include <iostream>

using namespace std;

void calcTrimestre(int mes){
	
	switch (mes){
		case 1:
			cout<<"\nO mes eh Janeiro";
			break;
		case 2:
			cout<<"\nO mes eh Fevereiro";	
			break;
		case 3:
			cout<<"\nO mes eh Marco";
			break;
		default:
			cout<<"\nO mes eh invalido";	
	}
	
		
}

main(){
	
	int month = 0;
	
	cout<<"\nInforme um mes do primeiro trimestre";
	cin>>month;
	
	calcTrimestre(month);
	
	return 0;
	
}
