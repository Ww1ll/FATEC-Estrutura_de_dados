#include <stdlib.h>
#include <iostream>

using namespace std;

int mdc(int a, int b){
	
	if(b == 0){
		return a;
	}
	
	if(a > b){
		return mdc(b, a % b);
	}
	
	if(a < b){
		return mdc(b, a);
	}
	
}


int main(){
	
	int numero1 = 0;
	int numero2 = 0;
	
	cout<<" -----MDC com algoritmo de Euclides----- "<<endl;
	cout<<"Informe dois numeros inteiros: "<<endl;
	cin>>numero1>>numero2;
	cout<<endl;
	
	cout<<"O MDC dos numeros eh: "<<endl;
	cout<<mdc(numero1,numero2);
	
	return 0;
}
