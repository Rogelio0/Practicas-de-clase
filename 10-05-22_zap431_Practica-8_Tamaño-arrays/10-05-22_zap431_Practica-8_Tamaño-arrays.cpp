// 10-05-22_zap431_Practica-8_Tamaño-arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Tanaño de arrays, el arreglo dinamico puede aumentar su tamaño si el algoritmo asi lo requiere

#include <iostream>
using namespace std;

int main()
{
    
   /*
    int Edades[3][2] = { {1,2},{9,8},{14,2} };
    int filas = (sizeof(Edades) / sizeof(Edades[0]));
    cout << filas;
    int columnas = (sizeof(Edades[0]) / sizeof(Edades[0][0]));
    cout << columnas;
    */

    int matriz[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
    //Modulo de imporesion
    cout << "Imprimir posiciones y valores \n";
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
    
        for(int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            cout << "[" << i << ","<< j << "]"<< "=" << matriz [i][j] << endl;

        }
        
    }
    cout << "\nMatriz en forma de matriz\n";
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            cout << matriz[i][j] << matriz[i][j] << matriz[i][j];
            cout << "\n";
        }

    }
    cout << "\nRellenar de manera aleatoria\n";
    srand; time(NULL);
    int matriz2[5][5];

    for (int i = 0; i < (sizeof(matriz2) / sizeof(matriz2[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); j++)
        {
            matriz2[i][j] = rand() % 5;
            cout << "[" << matriz2[i][j] << "," << matriz2[i][j] << "]" << endl;
        }

    }
    //Modulo interno es uno por fila mientras que el externo es por columnas
}
