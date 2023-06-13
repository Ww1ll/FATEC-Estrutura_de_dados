#include <stdlib.h>
#include <iostream>

using namespace std;

int quocienteDiv(int x, int y){
	
	if(x == y){
		return 1;
	}
	
	if(x < y){
		return 0;
	}
	
	if(x > y){
		return quocienteDiv (x-y,y) + 1;
	}
	
}

int main(){
	
	int x = 0;
	int y = 0;
	
	cout<<" ------Quociente da divisao------ "<<endl;
	cout<<"Informe dois numeros inteiros: "<<endl;
	cin>>x>>y;
	
	
	cout<<"O quociente da divisao eh: "<<endl;
	cout<<quocienteDiv(x,y);
	
	return 0;
}
