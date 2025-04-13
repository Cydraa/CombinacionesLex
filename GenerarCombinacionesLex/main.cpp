#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>

#include "FuncionesAuxiliares.hpp"
#include "CapturaSegura.hpp"

using std::cout;
using std::cin;
using std::endl;

using std::ofstream;
using std::string;

int main()
{
    int n, r, combinaciones, c;

    cout << "GENERADOR DE COMBINACIONES\n" << endl;
    cout << "Este programa calcula y genera las combinaciones de un conjunto A dados el valor de n y r." << endl;
    cout << "Acontinuacion, introduzca el valor de n y r: " << endl;

    //Captura n y r
    do
    {
        CapturaSegura(n, "n: ");
        if (n < 1) cout << "ERROR: Introduzca un valor mayor o igual 1." << endl;
    } while (n < 1);

    do
    {
        CapturaSegura(r, "r: ");
        if (r < 0) cout << "ERROR: Introduzca un valor mayor o igual 0." << endl;
        else if (r > n) cout << "ERROR: r no puede ser mayor a n." << endl;
    } while (r > n || r < 0);

    combinaciones = Combinaciones(n, r);

    int* A = new int[n];
    
    int** arregloComb = CrearArreglo(combinaciones, r);
 
    for (int i = 0; i < n; i++)
    {
        A[i] = i;
    }

    cout << "\nConjunto A: " << endl;
    ImprimirArreglo(A, n);


    //Generacion de combinaciones
    cout << "\n\nCombinaciones: \n" << endl;
    cout << "Numero de combinaciones TEORICA: " << Combinaciones(n, r) << "\n" << endl;

    c = 1;
    GenCombinaciones(n, r, arregloComb,c);

    cout << "Numero de combinaciones calculada: " << c << "\n" << endl;

    //Imprimir arreglo de combinaciones
    ImprimirArreglo2D(arregloComb, combinaciones, r);
    
    //Imprimir a CSV
    char ruta[100];
    sprintf_s(ruta, "../GenerarCombinacionesLex/Combinaciones/r_Combinaciones_%d_%d.csv", n, r);

    ImprimirACSV(arregloComb, combinaciones, r, ruta);

    //Destruccion de los arreglos
    delete[] A;
    DestruirArreglo(arregloComb, combinaciones);

    cout << endl << endl;

    StopSystem();
    return 0;
}