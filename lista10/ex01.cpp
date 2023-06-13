#include <stdlib.h>
#include <iostream>

using namespace std;

int mod(int x, int y){
	
	
	if(y == 0){
		return -1;
	}
	
	if(x > y){
		return mod(x-y, y);
	}
	
	if(x < y){
		return x;
	}
	
	if(x == y){
		return 0;
	}
	
}


int main(){
	
	int x = 0;
	int y = 0;
	
	
	cout<<" ------Resto de divisao------ "<<endl;
	cout<<"Informe dois numeros inteiros: "<<endl;
	cin>>x>>y;
	
	
	cout<<"O resto da divisao eh: "<<endl;
	cout<<mod(x,y);
	
	
	
	
	return 0;
}
