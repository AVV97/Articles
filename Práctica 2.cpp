#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// nombre del usuario
	char nombre[50];
	cout << "introduzca su nombre completo. utilice '_' para espacios" << endl;
	cin  >> nombre;
	cout << endl;
	
	// cédula del usuario
	char cedula[20];
	cout << "introduzca su numero de cedula" << endl;
	cin  >> cedula;
	cout << endl;
	
	// peso del articulo
	int peso;
	cout << "introduzca el peso del articulo" << endl;
	cin  >> peso;
	cout << endl;
	
	// precios y costos del articulo
	
	int precio;
	double costo;
	
	if (peso < 50)
	{
	
	
		cout << "introduzca el precio original del articulo" << endl;
		cin  >> precio;
		cout << endl;

		if ((precio >= 0) && (precio <= 25))
		{
	    cout << fixed << setprecision(2);
		costo = 15;
		cout << "costo:" << costo;
		cout << endl;
		cout << endl;
		// resultados finales
	    cout << "resultados finales" << endl;
	    cout << "cliente:" << nombre << "  cedula:" << cedula << "   peso:" << peso << "   precio:" << precio << "   costo:" << costo << endl;
	    cout << endl;
	    return 0;
        }
        
		else if ((precio > 25) && (precio <= 50))
		{
		cout << fixed << setprecision(2);
		costo = 10;
		cout << "costo:" << costo;
		cout << endl;
		cout << endl;
		// resultados finales
	    cout << "resultados finales" << endl;
	    cout << "cliente:" << nombre << "  cedula:" << cedula << "   peso:" << peso << "   precio:" << precio << "   costo:" << costo << endl;
	    cout << endl;
	    return 0;
		}
        
		else if ((precio > 50) && (precio <= 75))
		{
		cout << fixed << setprecision(2);
		costo = 5;
		cout << "costo:" << costo;
		cout << endl;
		cout << endl;
		// resultados finales
	    cout << "resultados finales" << endl;
	    cout << "cliente:" << nombre << "  cedula:" << cedula << "   peso:" << peso << "   precio:" << precio << "   costo:" << costo << endl;
	    cout << endl;
	    return 0;
	    }
	
		else
		cout << fixed << setprecision(2);
		costo = 0;
		cout << "costo:" << costo;
		cout << endl;
		cout << endl;
		// resultados finales
	    cout << "resultados finales" << endl;
	    cout << "cliente:" << nombre << "  cedula:" << cedula << "   peso:" << peso << "   precio:" << precio << "   costo:" << costo << endl;
	    cout << endl;
	    return 0;
		
	}
        
	else
	precio = 0;
	cout << "precio:" << precio << endl;
	cout << endl;
	cout << fixed << setprecision(2);
	costo = 25 * (1 - pow(1.01, -9.21 * peso));
	cout << "costo:" << costo;
	cout << endl;
	cout << endl;
	// resultados finales
	cout << "resultados finales" << endl;
	cout << "cliente:" << nombre << "  cedula:" << cedula << "   peso:" << peso << "   precio:" << precio << "   costo:" << costo << endl;
	 
	
	return 0;
}
