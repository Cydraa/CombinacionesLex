#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

using std::cout;
using std::endl;
using std::ofstream;

/**
* \file
*/

/**
* \brief Aleatoriza valores dentro de un rango dado.
*
* \param inicio Inicio del rango.
* \param fin Fin del rango.
* \return Un n&uacute;mero al azar dentro del rango especificado.
*/
int Aleatorizar(int inicio, int fin);

/**
* \brief Calcula el factorial de un n&uacute;mero n.
*
* \param n N&uacute;mero entero.
* \return El factorial del n&uacute;mero n.
* \pre n >= 1
*/
unsigned long long int Factorial(int n);

/**
* \brief Calcula el n&uacute;mero de r-combinaciones en n.
*
* \param n N&uacute;mero de elementos total del conjunto.
* \param r N&uacute;mero de elementos que se deben escoger.
* \return Las r-combinaciones de n en r.
* \pre n debe ser un entero mayor o igual a 1 (n >= 1). 
	r debe ser un entero mayor o igual a 0 (r >= 0). 
	r no puede ser mayor que n (r <= n).
*/
long Combinaciones(int n, int r);

/**
* \brief Limpia el b&uacute;ffer de caracteres.
*/
void CleanBuffer();

/**
* \brief Realiza una pausa del programa, compatible con Linux y Windows.
*/
void StopSystem();

/**
* \brief Genera el n&uacute;mero de r-combinaciones en n.
*
* \param n N&uacute;mero de elementos total del conjunto.
* \param r N&uacute;mero de elementos que se deben escoger.
* \param arregloComb[] Arreglo en donde se guardaran todas las combinaciones.
* \param c Contador de combinaciones.
*/
void GenCombinaciones(int n, int r, int** arregloComb, int& c);

/**
* \brief Imprime un arreglo dado.
* \param arreglo[] Arreglo a imprimir.
* \param c Tama&ntilde;o del arreglo.
*/
void ImprimirArreglo(int arreglo[], int c);

/**
* \brief Imprime un arreglo 2D dado.
* \param arreglo Puntero a puntero del arreglo a imprimir.
* \param m Renglones arreglo.
* \param n Columnas arreglo.
*/
void ImprimirArreglo2D(int** arreglo, int m, int n);

/**
* \brief Imprime un arreglo 2D dado a un archivo CSV.
* \param arreglo Puntero a puntero del arreglo a imprimir.
* \param m Renglones arreglo.
* \param n Columnas arreglo.
* \param ruta[] Ruta del archivo.
*/
void ImprimirACSV(int** arreglo, int m, int n, char ruta[]);

/**
* \brief Crea un arreglo din&aacute;mico de dos dimensiones usando un puntero a puntero entero (tipo del arreglo) que apunta al arreglo blanco.
*
* \param m Renglones del arreglo 2D (tama&ntilde;o de arreglo de punteros).
* \param n Columnas del arreglo 2D (tama&ntilde;o de los arreglos blanco).
* \return Un puntero a puntero entero.
*/
int** CrearArreglo(int m, int n);

/**
* \brief Destruye un arreglo din&aacute;mico de dos dimensiones de la estructura usando un puntero a puntero entero (tipo del arreglo) que apunta al arreglo blanco.
*
* \param arreglo El arreglo de dos dimensiones.
* \param m Columnas del arreglo 2D.
*/
void DestruirArreglo(int**& arreglo, int m);


