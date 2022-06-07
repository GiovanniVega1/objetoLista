#pragma once
#include <iostream>

using namespace std;

class Nodo {
	private:
		int dato;
		string tarea;
		string terminada;
		Nodo* siguiente;
	public:
		void insertarNodo();
		void mostrarLista();
		void marcarNodo();
};