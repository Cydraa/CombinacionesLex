#include "FuncionesAuxiliares.hpp"

int Aleatorizar(int inicio, int fin)
{
    return inicio + rand() % (fin - inicio + 1);
}

void CleanBuffer() {
    char c;
    while ((c = getchar()) != EOF && c != '\n');
}

void StopSystem() {
    cout << "Presiona ENTER para continuar...";
    CleanBuffer();
    getchar();
}

unsigned long long Factorial(int n)
{
    unsigned long long factorial(1);

    for (int i = 2; i <= n; ++i)
    {
        factorial *= i;
    }

    return factorial;
}

long Combinaciones(int n, int r)
{
    int combinaciones;

    combinaciones = Factorial(n) / (Factorial(r) * Factorial(n - r));

    return combinaciones;
}

void ImprimirArreglo(int arreglo[], int c)
{
    if (c != 0)
    {
        cout << "{ ";
        for (int i = 0; i < c; ++i)
        {
            cout << arreglo[i] << " , ";
        }
        cout << "\b\b}";
    }
    else
    {
        cout << "{}";
    }
}

void ImprimirArreglo2D(int** arreglo, int m, int n)
{
    if (m == 0)
    {
        cout << "{ }";
    }
    else
    {
        for (int i = 0; i < m; ++i)
        {
            if (n == 0)
            {
                cout << "{ }";
            }
            else
            {
                cout << "{ ";
                for (int j = 0; j < n; ++j)
                {
                    cout << arreglo[i][j] << " , ";
                }
                cout << "\b\b}";
            }
        }
    }
}

void ImprimirACSV(int** arreglo, int m, int n, char ruta[])
{
    ofstream archivo(ruta);

    for (int fila = 0; fila < m; ++fila)
    {
        for (int columna = 0; columna < n; ++columna)
        {
            archivo << arreglo[fila][columna];
            archivo << ",";
        }

        archivo << endl;
    }

    archivo.close();

    cout << "\nEl archivo generado de los datos se encuentra en: \n" << ruta << endl;
}

void GenCombinaciones(int n, int r, int** arregloComb, int& c)
{
    int* s = new int[r];
    int m, val_max, ren;

    for (int i = 0; i < r; ++i)
    {
        s[i] = i;
    }

    //Imprimir al arreglo de combinaciones
    for (int col = 0; col < r; ++col)
    {
        arregloComb[0][col] = s[col];
    }

    ren = 1;
    do
    {
        m = r;
        val_max = n-1;

        while (m >= 1 && s[m-1] == val_max)
        {
            --m;
            --val_max;
        }

        if (m < 1) break;

        ++s[m-1];

        for (int j = m ; j < r; ++j)
        {
            s[j] = s[j - 1] + 1 ;
        }

        //Imprimir al arreglo de combinaciones
        for (int col = 0; col < r; ++col)
        {
            arregloComb[ren][col] = s[col];
        }

        ++ren;
        ++c;
    } while (m > 0);

    delete[] s;

}

int** CrearArreglo(int m, int n) // m = renglones, n = columnas
{
    //Construccion de un arreglo dinamico 2D tipo** CrearArreglo(int m, int n)
    int** arreglo = new int* [m];
    for (int i = 0; i < m; ++i)
    {
        arreglo[i] = new int[n];
    }

    return arreglo;
}

void DestruirArreglo(int**& arreglo, int m)
{
    //Liberar arreglo dinamico void DestruirArreglo(tipo** &arreglo, int m)
    for (int i = 0; i < m; ++i)
    {
        delete[] arreglo[i];
    }
    delete[] arreglo;

    arreglo = NULL;  // Si ya no se va a usar
}