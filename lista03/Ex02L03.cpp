//Criar um programa que receba 4 notas e calcule a m�dia aritm�tica, atrav�s de uma fun��o.

#include <cstdlib>
#include <iostream>

using namespace std;


float media (float n1, float n2, float n3, float n4){
	return (n1 + n2 + n3 + n4)/ 4;
}


int main(){
	
	float n1, n2, n3, n4 = 0;
	
	
	cout<<"\nInforme a primeira nota";
	cin>>n1;
	cout<<"\nInforme a segunda nota";
	cin>>n2;
	cout<<"\nInforme a terceira nota";
	cin>>n3;
	cout<<"\nInforme a quarta nota";
	cin>>n4;
	
	float result = media(n1, n2, n3, n4); 
	
	cout<<"\nA media eh: "<<result;
	
	return 0;
	
}

