#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int calcularPotencia(int k, int x){
	
	if( k == 1){
		return x;
	}
	
	if(k == 0){
		return 1;
	}
	
	return x * calcularPotencia(x, k - 1);

}


int main(){
	
		int k = 0;
		int x = 0;
	
		cout<<" -----Calculo da potencia K----- "<<endl;
		cout<<"Informe um numero natural k"<<endl;
		cin>>k;
		cout<<"Informe um valor a ser exponenciado"<<endl;
		cin>>x;
		
		cout<<calcularPotencia(k, x)<<endl;		
	
	return 0;
}
