//Ex 03 - Criar um programa que receba 2 valores e calcule o produto através de umafunçãoque  retorna valores.

#include <cstdlib>
#include <iostream>
using namespace std;

float calcProduto(float x, float y){
	return (x * y); 
}


int main (){
	
	float v1, v2, produto = 0;
	
	cout<< "\n Informe o valor 1: "; 
	cin >> v1; 
	cout<< "\n Informe o valor 2: "; 
	cin >>  v2; 
	
	produto = calcProduto(v1, v2); 
	
	cout << endl << "Valor do produto: "<< produto << endl; 
	
	return 0; 
}
