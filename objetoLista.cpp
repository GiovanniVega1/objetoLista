#include <iostream>
#include "Nodo.h"
using namespace std;


int main() {
	Nodo<string, int> nod;

	nod.insertarNodo();
	nod.insertarNodo();
	nod.insertarNodo();
	cout << endl << " La COLA " << endl;
	nod.desplegarCola();
	return 0;
}             

