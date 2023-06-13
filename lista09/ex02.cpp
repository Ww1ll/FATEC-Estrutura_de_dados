#include <stdlib.h>
#include <iostream>

using namespace std;

void baseBinaria(int numero){
	
	if(numero /2 != 0){
		baseBinaria(numero / 2);
	}
	cout<<numero %2;

}

int main(){
	
	int number = 0;
	
	cout << " -------- Conversao para binario -------- " << endl;
	cout<<endl;
	cout<<"Digite um numero decimal: "<<endl;
	cin>> number;
	cout<<endl;
	cout<<"O numero convertido em binario eh: "<<endl;
	baseBinaria(number);
	cout<<endl;
	
	return 0;
}
