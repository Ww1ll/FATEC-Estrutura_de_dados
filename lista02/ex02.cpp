//Dado um n�mero real X e um n�mero natural K, calcular a pot�ncia X elevado a K
//atrav�s de produtos sucessivos.
//xk = x.x.x.x. ...... x

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	
	int x, k = 0;
	int result = 0;
	
	cout<<"\nInforme uma base";
	cin>>x;
	cout<<"\nInforme um expoente";
	cin>>k;


	if(k == 0){
		result = 1;
		
	} else {
		for(int i = 0; i < k; i++){
		if(result == 0){
			result = x;
		} else{
			
		 result *= x;	
		}
		
	}	
		
		
	}


	
	cout<<"\nO resultado eh: "<<result;
	

	return 0;
}
