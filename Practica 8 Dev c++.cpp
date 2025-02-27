#include "iostream"
using namespace std;

int main()
{
	//Este programa calcula e imprime lo que hay que cobrarle al clientepor cada galon de gasolina
	//Si cada galon tiene 3.785, y el precio del litro es 8.20
	
	float GALONES, TOTAL;
	const float GALON= 3.785, PRECIOLITRO=8.20;
	
	//Entrada de datos
	
	cout <<" Escribe la cantidad de galones de gasolina comprados "<< "\n";
	cin>> GALONES;
	
	//calculo
	TOTAL= GALONES*GALON*PRECIOLITRO;
	
	//Se imprimen resultados
	cout<< " Hay que cobrar el cliente por "<< GALONES<< " galones "<< " Debe pagar " << TOTAL<< " pesos "<<"\n";
	return 0; 

} 
