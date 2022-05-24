// 29_03_2022_zap431_Condiciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()

{

	int edad = 0;
	std::cout << "Ingresa tu edad en anios por favor... \n" << std::endl;
	std::cin >> edad;
	if (edad > 18)

		//Condicion If- Dentro del parentesis lo que vamos a analizar

	{
		//Si se cumpio se ejecuta esto
		std::cout << "La condicion se cumplio \n" << std::endl;
		std::cout << "Se dice que es mayor de edad... \n" << std::endl;

	}
	//Si se cumple o no se ejecuta esto.
	else
	{


		std::cout << "No cumples con la condicion... \n" << std::endl;
		std::cout << "Lo lamente este juego es para mayores de edad \n" << std::endl;
	}

	if (edad >= 18)
	{
		//Si se cumple se ejecuta esto
		std::cout << "Es mayor ajalas! \n" << std::endl;

	}
	else
	{
		//Esto se ejecuta si es falso lo que esta dentro del If
		std::cout << "Pal Free chaval" << std::endl;
		/*Tabla Edad esperado  real  correcto
		   17		free	`		si
		   18		ajalas			si
		   19		Ajalas			si
		   */

	}

}
	/*int edad = 0;
if (edad <= 18)
   {
	std::cout << "Lo lamente este juego es para mayores de edad" << std::endl;

   }
else (edad >= 15);
{
	std::cout << "Solo espera unos años más" << std::endl;

}

std::cout << "La ejecucion terminara pronto...";
std::cout << "Ya que no hay mas condiciones para evaluar" << std::endl;
	

}
*/