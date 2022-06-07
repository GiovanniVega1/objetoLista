#include "Nodo.h"

Nodo* primero;
Nodo* ultimo;
 
void Nodo::insertarNodo() {
	Nodo* nuevo = new Nodo();
	cout << " Ingrese el dato del nuevo Nodo: ";
	cin >> nuevo->dato;
	cout << " Ingrese el nombre de la nueva tarea: ";
	cin >> nuevo->tarea;

	if (primero == NULL) {
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = primero;
	}
	else {
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
	cout << endl << " Nodo Ingresado " << endl << endl;
}

void Nodo::mostrarLista() {
	Nodo* actual = new Nodo();
	actual = primero;
	if (primero != NULL) {
		while (actual != NULL) {
			cout << endl << " " << actual->dato << ": " << actual->tarea << "\t " << actual->terminada;
			actual = actual->siguiente;
		}
	}
	else {
		cout << endl << " La lista no tiene datos " << endl << endl;
	}
}

void Nodo::marcarNodo() {
	Nodo* actual = new Nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << "Ingrese el numero de la tarea a marcar como completada" << endl;
	cin >> nodoBuscado;
	if (primero != NULL) {
		while (actual != NULL && encontrado != true) {
			if (actual->dato == nodoBuscado) {
				encontrado = true;
				actual->terminada = "Tarea terminada";
			}
			actual = actual->siguiente;
		}
		if (!encontrado) {
			cout << "Tarea no existente" << endl;
		}
	}
	else {
		cout << endl << " La lista no tiene datos " << endl << endl;
	}
}

