//Criar um programa que verifique se um n�mero � primo ou n�o, atrav�s de uma fun��o. N�mero primo �
//divis�vel somente por 1 e por ele mesmo.

#include <cstdlib>
#include <iostream>


using namespace std;

int calcPrimo(int num){
	
	int result = 0;
	
	for(int i = 2; i<num; i++){
		if(num %i == 0){
			result++;
		}
	}
	
	return result;
		
}

main(){
	int n;
	
	cout<<"\nInforme um valor para verificar se ele eh primo ou nao";
	cin>>n;
	
	int numero = calcPrimo(n);
	
	if(numero == 0){
		cout<<"\nNumero primo";
	}else{
		cout<<"\nNao eh um numero primo";
	}
	
	
	return 0;	
}
