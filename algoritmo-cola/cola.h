#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

class Cola {
private:
	int *_cola, _tamanio;
	// POSICIONES
	int _pos_principio, _pos_final;

	// HERRAMIENTAS
	bool vacia();
	bool llena();
public:
	Cola(int cantidad);
	~Cola();

	void agregar(int);
	int sacar();
	void mostrar();
};

// CONSTRUCTOR
Cola::Cola(int cantidad = 1) {
	_tamanio = cantidad;
	_pos_principio = _pos_final = 0;
	_cola = new int[_tamanio];
	if (_cola == NULL) {
		cout << "No hay memoria disponible" << endl;
		exit(1);
	}
}

// DESTRUCTOR
Cola::~Cola() {
	delete[] _cola;
}

// HERRAMIENTAS (METODOS PRIVADOS)
bool Cola::vacia() {
	return _pos_principio == _pos_final;
}

bool Cola::llena() {
	return _pos_final == _tamanio;
}

// AGREGAR
void Cola::agregar(int dato) {
	if (llena()) {
		cout << "Quiero agregar: " << dato << endl;
		cout << "Cola llena" << endl;
		return;
	};

	_cola[_pos_final] = dato;
	_pos_final++;
}

// SACAR
int Cola::sacar() {
	if (vacia()) {
		cout << "Quiero sacar: " << _pos_principio << endl;
		cout << "Cola vacia" << endl;
		return -1;
	}
	int dato = _cola[_pos_principio++];

	if (llena() && _pos_principio == _tamanio) _pos_principio = _pos_final = 0;
	return dato;
}

// MOSTRAR
void Cola::mostrar() {
	if (vacia()) {
		cout << "Cola vacia" << endl;
		return;
	}

	for (int i = _pos_principio; i < _pos_final; i++) {
		cout << _cola[i] << " ";
	}
	cout << endl;
}

#endif // COLA_H_INCLUDED