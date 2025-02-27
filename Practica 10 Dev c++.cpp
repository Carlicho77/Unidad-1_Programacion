#include "iostream"
using namespace std;

int main()
{
	//Este programa calcula cuantos segundos hay en un determindado numero de dias
	int DIAS;
	float SEGUNDOS;
	
	//Entrada de datos
	cout<<" Escribe el numero de dias para calcular lo segundos "<<"\n"; cin >> DIAS;
	
	//CALCULO
	SEGUNDOS=DIAS*24*60*60;
	
	//SE IMPRIME RESULTADOS
	cout<<" En "<<DIAS<<" dias, hay "<<SEGUNDOS<<" segundos "<<"\n";
	cin>>DIAS;
	
return 0;
}
