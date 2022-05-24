#pragma once
#include <iostream>

using namespace::std;

class Nodo {
	private:
		int dato;
		Nodo* siguiente;
	public:
		void insertarNodo();
		void desplegarCola();
};