#include "Menu.h"
#include "Nodo.h"

void Menu::SeleccionarAccion() {
	cout << "Ingrese una opcion" << endl;
	Nodo nod;
	do{
		cout << endl << "1: Ingresar tarea  2: Mostrar tarea  3: Eliminar tarea  4: Marcar tarea  0: salir" << endl;
		cin >> opc;
		switch (opc){
		case 1: nod.insertarNodo(); break;
		case 2: nod.mostrarLista(); break;
		case 3: nod.eliminarNodo(); break;
		case 4: nod.marcarNodo(); break;
		case 0: break;
		default:cout << "Esta opcion no existe" << endl; break;
		}
		cout << endl;
		system("pause");
		system("cls");
	} while (opc != 0);

}
