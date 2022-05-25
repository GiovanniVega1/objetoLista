#include <iostream>
#include "Nodo.h"
#include "Menu.h"

using namespace std;

class principal {
	private:
		Menu men;
	public:
		void run();
};

int main() {
	principal pri;
	pri.run();

	return 0;
}    

void principal::run() {
	men.SeleccionarAccion();
}

