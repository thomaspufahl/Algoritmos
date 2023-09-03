#include <iostream>

using namespace std;

#include "cola.h"

int main()
{
	Cola c(3);
	cout << "1. Mostrar" << endl;
	c.mostrar();
	c.agregar(1);
	c.agregar(2);
	cout << "2. Mostrar" << endl;
	c.mostrar();

	c.agregar(3);
	c.agregar(4);

	cout << "3. Mostrar" << endl;
	c.mostrar();


	c.sacar();
	c.sacar();

	cout << "4. Mostrar" << endl;
	c.mostrar();

	c.sacar();
	c.sacar();

	cout << "5. Mostrar" << endl;
	c.mostrar();

	c.agregar(15);
	cout << "6. Mostrar" << endl;
	c.mostrar();

	system("pause");
	return 0;
}