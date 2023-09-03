#include <iostream>

using namespace std;

/*
 * COMPORTAMIENTO LIFO
 * Last In First Out
 * El ultimo que ingresa es el primero que sale
*/

#include "pila.h"

int main()
{
	Pila p(3);
	p.push(1);
	p.push(2);
	p.push(3);

	cout << "1. Mostrar pila" << endl;
	p.mostrar();

	cout << "1.5 Se lleno la pila? " << p.se_lleno << endl; 

	cout << "2. Sacar un elemento de la pila" << endl;
	cout << "Elemento sacado: " << p.pop() << endl;

	cout << "3. Mostrar pila" << endl;
	p.mostrar();

	cout << "4. Sacar un elemento de la pila" << endl;
	cout << "Elemento sacado: " << p.pop() << endl;

	cout << "5. Mostrar pila" << endl;
	p.mostrar();

	cout << "6. Sacar un elemento de la pila" << endl;
	cout << "Elemento sacado: " << p.pop() << endl;

	cout << "7. Mostrar pila" << endl;
	p.mostrar();

	cout << "7.5 Sacar un elemento de la pila" << endl;
	cout << "Elemento sacado: " << p.pop() << endl;

	cout << "8. Agregar un elemento a la pila" << endl;
	p.push(4);

	cout << "9. Mostrar pila" << endl;
	p.mostrar();

	cout << "10. Agregar un elemento a la pila" << endl;
	p.push(5);

	cout << "11. Mostrar pila" << endl;
	p.mostrar();

	system("pause");
	return 0;
}