#pragma once
#include <iostream>

using namespace::std;

template<typename T, typename U>
class Nodo {
	private:
		U dato;
		T tarea;
		Nodo* siguiente;
	public:
		void insertarNodo();
		void desplegarCola();
};