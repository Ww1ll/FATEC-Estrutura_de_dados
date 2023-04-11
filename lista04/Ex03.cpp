#include <iostream>
#include <pilha.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	system("cls");
	
	struct Pilha P1;
	IniPilha(&P1);
	
	int x, z, w;
	
	cout<<"Digite um numero decimal: "<<endl;
	cin>>x;
	
	z = x % 8;
	w = x / 8;
	
	Push(&P1,z);
	
	while(w != 0){
		
		x = w;
		z = x % 8;
		w = x / 8;
		
		Push(&P1, z);
		
	}
	
	while(!pilhavazia(&P1)){
		
		x = Pop(&P1);
		cout<<x;
	}
	
	cout<<endl;
		system("pause");
		return 0;
	
}
