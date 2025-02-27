#include "iostream"
#include "iostream"
using namespace std;
	
int main()
{	
	//Hola! Este programa recibe datos como el nombre del dinosaurio, su peso y longitud
	//Estos ulyimos expresados en libras y pies respectivamente
	
	//Declaracion de variables
	string NOMBRE;
	float PESOLIBRAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	
	//Estrada de datos
	cout <<"Escribe el nombre del DINOSAURIO"<< "\n";
	cin>>NOMBRE;
	
	cout <<"Escribe el peso del DINOSAURIO en libras"<< "\n";
	cin>> PESOLIBRAS;
	
	cout <<"Escribe la longitud del DINOSAURIO en pies"<< "\n";
	cin>> LONGITUDENPIES;
	
	//Calculo
	PESOENKILOS=PESOLIBRAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047;
	
	//Se imprimen los resultados
	
	cout << "El peso en kilos del DINOSAURIO " << NOMBRE << " es " << PESOENKILOS << " y la longitud en metros es " << LONGITUDENMETROS << "\n";
	return 0;
	
} 
