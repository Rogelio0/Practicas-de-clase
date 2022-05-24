// 05-04-2022_zap431_Ciclos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>


int main()
{
    /*
    bool uno = true;
        //Ciclo
        while (uno == true)
        {
            std::cout << "Uno es verdadero!!!! \n";
            std::cout << "Desea salir? \nIngrese 0 para no \n";
            std::cout << "Ingrese 1 para si \n";
            std::cin >> uno;

    }
    */
   
      
    /*bool uno = true;
    std::string correo = "Roch@yo.mx";
    std::string contra = "Hola123";
    //Ciclo Do While

    do
    {
        std::cout << "Ingresa tu correo: \n";
        std::cin >> correo;
        if (correo == "Roch@yo.mx") 
        std::cout << "Ingresa tu contraseña: \n";
        std::cin >> contra;
            if (contra == "Hola123")  
            {
            std::cout << "Bienvenido al mundo pequeño... \n";
            }
            else
             {
            std::cout << "Correo no registrado compadre \n";
            }
            {
                std::cout << "Deasea continuar? \n";
                std::cout << "Ingrese 0 para no \n";
                std::cout << "Ingrese 1 para si \n";
                std::cin >> uno;

            }
     
   } while (uno == true);

   */

   //Ciclo de For
    int contador = 0;
    

    for (int i = 0; i <= 100; i++)
    
    {
        
        std::cout << i << " ";
        Sleep(100);

        /*
        for  ( int j = 0; j < 10; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
        Sleep(2000);
        */
    }

}

