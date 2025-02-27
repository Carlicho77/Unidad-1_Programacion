#include "iostream"
#include "string"

using namespace std;
int main()
{
    //Hola! Este programa calcula el dinero que debe ser devuleto al cliente
    //dado el costo del preducto vendido y la cantidad de dinero entregada.
    
    //Declaracion de variables
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;
    
    //Entrada de datos
    cout << "Escribe el costo del articulo "<< "\n";
    cin >>PRECIOPRODUCTO;
	
	cout << "Escribe cuanto fue el pago del articulo "<< "\n";
    cin >>PAGO;
    
    //Calculo de devolucion
    DEVOLUCION=PAGO-PRECIOPRODUCTO;
    
    //Se imprimen resultados
    cout <<"El cambio del cliente es"<<DEVOLUCION;
return 0;
} 
