//Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem,
//utilizando-se um autom�vel que faz �x� km/l. Para obter o c�lculo, o usu�rio dever�
//fornecer o tempo gasto na viagem e a velocidade m�dia durante a mesma. Desta forma ser�
//poss�vel obter a dist�ncia percorrida com a f�rmula: DIST�NCIA= TEMPO *
//VELOCIDADE (utilizar uma fun��o). Tendo o valor da dist�ncia, basta calcular a
//quantidade de litros de combust�vel utilizada na viagem com a f�rmula:
//LITROS_USADOS=DIST�NCIA / �x� (atrav�s de fun��o). O programa dever� apresentar
//os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a
//quantidade de litros utilizada na viagem.


#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	
	double x = 20, qtdLitros = 0;
	double tempo = 0, velMedia = 0, distancia = 0; 


	cout<<"\nInforme o tempo gasto na viagem em hora";
	cin>>tempo;
	cout<<"\nInforme a velocidade media durante a viagem";
	cin>>velMedia;
	

	distancia = tempo * velMedia;
	
	
	qtdLitros = distancia/x;	
	

	cout<<" \nA velocidade media eh: "<<velMedia<<" tempo: "<<tempo<<" distancia percorrida: "<<distancia<<" quantidade de litros: "<<qtdLitros;

	return 0;
}
