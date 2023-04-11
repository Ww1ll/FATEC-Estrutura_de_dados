//Uma string � considerada pal�ndroma se ela pode ser lida da esquerda para a direita ou
//da direita para a esquerda com o mesmo significado. Neste caso, n�o podemos considerar
//acentua��es, letras mai�sculas ou min�sculas, os espa�os e os caracteres especiais. A
//seguir est�o alguns exemplos:
//Radar
//Subi no Onibus
//Go dog
//Fa�a um programa em C++ para verificar se uma express�o � ou n�o pal�ndroma

#include <iostream>
#include <pilha.h>

using namespace std;

int main(){
	
	struct Pilha P1;
	IniPilha(&P1);
	char caractere[30];
	char x;
	int t, i;
	char y;
	bool palindromo;
	
	
	cout<<"\nEscreva uma palavra: ";
	cin>>caractere;
	
	t = strlen(caractere);
	
	for(i=0; i<t; i++){
		Push(&P1, caractere[i]);
	}
	while (!pilhavazia(&P1)){
		for(i=0; i<t; i++){
			x=Pop(&P1);
			if(caractere[i] == x){
				palindromo = true;
			}else{
				palindromo = false;
			}
		}
		
		if(palindromo){
			cout<<"\nEh um palindromo";
		} else {
			cout<<"\nNao eh um palindromo";
		}
		
	}
	return 0;	
}
