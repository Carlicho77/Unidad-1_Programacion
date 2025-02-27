#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	//Este progrma determina el area de un triangulo dados la medida de sus tres lados
	
	float L1, L2, L3,S,AREA; 
	const float PI=3.141592;

	//Entrada de datos
	cout<<" Escribe la medida del lado uno del triangulo "<<"\n"; 
	cin >> L1;
	cout<<" Escribe la medida del lado dos del triangulo "<<"\n"; 
	cin >> L2;
	cout<<" Escribe la medida del lado dos del triangulo "<<"\n"; 
	cin >> L3;

	//CALCULO
	S=(L1+L2+L3)/2;
	AREA=sqrt(S* (S-L1)*(S-L2)*(S-L3));

	//SE IMPRIME RESULTADOS
	cout<<" La variable auxiliar para el calculo del area es "<<S<<"\n";
	cout<<" El area del triangulo "<<AREA<<"\n";
return 0;
}
