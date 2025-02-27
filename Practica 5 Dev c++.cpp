#include <stdio.h> 
#include "iostream"
using namespace std;

int main()
{  
	float ALTURA, BASE;
	float SUPERFICIE, PERIMETRO;
	//Mensaje dde bienvenida
	cout<<"Hola! Este program 1.10 calcula la suoerficie y el perimetro de un rectangulo" << "\n";
	
	//Se declaran los numros que se sumaran (pueden ser decimales)
	
	//Se pide el primer numero
	cout << "Por favor ingrese el valor de la base:  " << " \n";
	cin >> BASE;
	//Se pide el segundo numero
	cout << "Por favor ingrese el valor de la altura:  " << " \n";
	cin >> ALTURA;
	
	SUPERFICIE= BASE*ALTURA;
	PERIMETRO=2*(BASE+ALTURA);
	
	//Se muestra el resultado
	printf (" \n la superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf (" \n el perimetro del rectangulo es %5.2f \n", PERIMETRO);
	
	return 0;
	
} 
