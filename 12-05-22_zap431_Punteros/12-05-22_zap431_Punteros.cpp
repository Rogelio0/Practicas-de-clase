// 12-05-22_zap431_Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Roy

#include <iostream>
#include <Windows.h>
#include <locale>
#include <string>
using namespace std;

int main()
{
	/*
	//Funciones de control...
	system("pause"); //Pausa el sistema hasta que se presione una tecla
	system("CLS"); //limpia la consola en imporesion
	Sleep(100);//Detiene la ejecucion por un tiempo.

	//Puntero
	int variable = 0; //Variable entera normal y aburrida
	int* apuntador = &variable; //Puntero que no entiendo e intetare usar\
	//#No prometo nada profe
	std::cout << variable << std::endl; //numero de la variable
	*apuntador = 20;
	std::cout << variable << std::endl;//numero de la variable cambiado a 20 por el apuntador
	std::cout << apuntador << std::endl; //imprime la direccion
	std::cout << *apuntador << std::endl; //imprime el numero 20 de apuntador
	std::cout << &variable << std::endl; //Para saber donde esta el apuntador
	apuntador = NULL;
	system("Pause");
	//PARA LIBERAR LA MEMORIA DEBERIAS COLOCAR UN NULL CADA QUE TERMINES


	//Borrar o liberar la memoria. Muy importante si queremos usar punteros
	apuntador = NULL;
	 */
	/*
	string nombre[50];
	string* apuntador_nom = nombre;
	*/
	setlocale(LC_ALL, "Spanish");
	string* titulos = NULL;
	int Tamanio=0;
	cout << "¿Cuantos libros quieres almacenar? \n";
	cin >> Tamanio;
	titulos = new string[Tamanio];

	//rellenar y mostrar
	//Rellenar
	for (int i = 0; i < Tamanio; i++)
	{
		cout << "Ingresa el titulo del libro #" << i + 1 << endl;
		if (i==0)
		{
			cin.ignore();
		}
		getline(cin, titulos[i]);
		system("CLS");
	}
	//mostrar
	for (int i = 0; i < Tamanio; i++)
	{
		cout << "El titulo del libro #" << i + 1 << " es:" << endl;
		cout << titulos[i] << endl;
	}
	
	delete[] titulos;
	titulos = NULL;

}

