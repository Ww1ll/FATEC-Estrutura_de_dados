#include <stdlib.h>
#include <iostream>

using namespace std;

int fibonacci(int numero){
	
	if(numero==1) {
	return 1; 
	}
	
    if(numero==2) {
	return 1; 
	} 

    return fibonacci(numero-1) + fibonacci(numero -2); 
	
}


int main(){

	int number = 0;

	cout << " -------- Fibonacci -------- " << endl;
	cout<<endl;
	cout<<"informe o termo a ser encontrado na sequencia de fibonacci: "<<endl;
	cin>> number;
	
	cout<<fibonacci(number)<<endl;

	return 0;
}
