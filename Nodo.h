#pragma once
#include <iostream>

using namespace std;

class Nodo {
	private:
		int dato;
		string tarea;
		Nodo* siguiente;
	public:
		void insertarNodo();
		void mostrarLista();
};