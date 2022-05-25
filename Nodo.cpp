#include "Nodo.h"

Nodo<string, int>* primero;
Nodo<string, int>* ultimo;

void Nodo<string, int>::insertarNodo() {
	Nodo<string, int>* nuevo = new Nodo();
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

void Nodo<string, int>::desplegarCola() {
	Nodo* actual = new Nodo();
	actual = primero;
	if (primero != NULL) {
		while (actual != NULL) {
			cout << endl << " " << actual->dato << ": " << actual->tarea;
			actual = actual->siguiente;
		}
	}
	else {
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
}

