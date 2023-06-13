#include <stdlib.h>
#include <iostream>

using namespace std;

int soma(int n){
	
	if(n == 0){
		return 0;
	}
	
	return n + soma(n-1);
}


int main(){
	
	int numero = 0;
	
	cout<<" ------Calcula somatoria dos n primeiros termos------ "<<endl;
	cout<<"Informe um numero: "<<endl;
	cin>>numero;
	
	cout<<"A somatoria dos n primeiros termos eh: "<<endl;
	cout<<soma(numero);
	
	return 0;
}
