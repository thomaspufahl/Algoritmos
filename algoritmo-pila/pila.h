#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

class Pila {
private:
	int *_pila, _tam;

	// Posicion final de la pila o tope
	int _tope;

	// HERRAMIENTAS
	bool lleno();
	bool vacio();
public:
	Pila(int tam);
	~Pila();
	bool se_lleno = false;

	// Agregar un elemento en la pila
	void push(int dato);

	// Sacar un elemento de la pila (por LIFO, seria el ultimo elemento de la pila)
	int pop();

	// Mostrar pila
	void mostrar();
};

// Constructor
Pila::Pila(int tam = 1) {
	_tam = tam;
	_tope = 0;

	_pila = new int[_tam];
	if (_pila == NULL) exit(-1);
}

// Destructor
Pila::~Pila() {
	delete[] _pila;
}

// HERRAMIENTAS (METODOS PRIVADOS)
bool Pila::lleno() {
	return _tope == _tam;
}

bool Pila::vacio() {
	return _tope == 0;
}


// Agregar
void Pila::push(int dato) {

	/*
	Codigo previo a la modificacion de la variable se_lleno
	if (lleno()) {
		cout << "Pila llena" << endl;
		return;
	}

	_pila[_tope] = dato;
	_tope++;

	*/

	if (!se_lleno) {
		_pila[_tope] = dato;
		_tope++;
	}


	if (lleno()) se_lleno = true;
	if (se_lleno) {
		cout << "La pila fue llenada con anterioridad y no se puede volver a llenar" << endl;
	}
}

// Sacar
int Pila::pop() {
	if (vacio()) {
		cout << "Pila vacia" << endl;
		return -1;
	}
	

	_tope--;

	return _pila[_tope];
}

// Mostrar
void Pila::mostrar() {
	if (vacio()) {
		cout << "Pila vacia" << endl;
		return;
	}

	// Recorrido de la pila de abajo hacia arriba (del primer elemento al ultimo)
	/*
	for (int i = 0; i < _tope; i++) {
		cout << _pila[i] << " ";
	}
	*/

	// Recorrido natural de una pila (del ultimo elemento al primero)
	// Recorrido de la pila de arriba hacia abajo (del ultimo elemento al primero)
	for (int i = _tope -1; i >= 0; i--) {
		cout << _pila[i] << " ";
	}

	cout << endl;
}


#endif // PILA_H_INCLUDED