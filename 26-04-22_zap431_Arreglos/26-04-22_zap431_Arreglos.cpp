// 26-04-22_zap431_Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rogelio Flores
//Arreglos o Arrays
//Son cajas de cajas negras, ejemplo y sintaxis


#include <iostream>
#include <string>
using namespace std;

int main()
{ //Inventario de libros

	std::string titulos[5];
	int anios[5];
	std::string Autores[5];
	int contador = 0;

	/*
	char Autor[5];
	char Autor2[5];
	*/

	for (int aux = 0; aux<= 4;  aux++)
	{

		std::cout << "Ingresa el titulo del libro # " << aux << std::endl;
		cin.ignore();
		getline(cin, titulos[aux]);

		std::cout << "Ingresa el autor del libro # " << aux << std::endl;
		getline(cin, Autores[aux]);

		std::cout << "Ingresa el anio de publicacion del libro # " << aux << std::endl;
		std::cin >> anios[aux];
		
	}
	for (int aux = 0; aux <= 4; aux++)
	{


		std::cout << "El titulo del libro es: " << titulos[aux] << std::endl;
		std::cout << "El anio de publicacion del libro es: " << anios[aux] << std::endl;
		std::cout << "El autor del libro es: " << Autores[aux] << std::endl;
	}

}


