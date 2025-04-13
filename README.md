# CombinacionesLex
Este programa genera todas las r-combinaciones en orden lexicográfico de un conjunto.

Autor: Ana Paulina Sortillón Sortillón

## Descripción del algoritmo

El algoritmo genera las r-combinaciones C(n,r) de tamaño r de un arreglo de índices a{n} = {0,1,...,n} en orden lexicográfico creciente. Primeramente, el algoritmo genera un arreglo s{r} de tamaño r, el cual se llenará de números crecientes a partir del 0 (asumiendo que los índices del lenguaje de programacion empiezan en 0). Este primer arreglo es la primera combinación.

Luego, el algoritmo entra en un ciclo en donde recorrerá el índice m del arreglo de tal manera que encuentre un índice tal que este no sea igual o mayor a valor máximo (n). Si esto es así, el algoritmo actualiza m al siguiente valor y a los elementos a la derecha de m para asegurar de que sean los mínimos sucesores. En cada ciclo exitoso, el algoritmo incrementa un contador para calcular el número de combinaciones generadas.

El algoritmo termina cuando m = 0 y ha generado la última combinación.

Como se menciono anteriormente, el arreglo original y las combinaciones que genera el algoritmo son arreglos de índices enteros, lo cual es conveniente ya que esta generalización del orden puede ser utilizada por otra función para mapear arreglos de caracteres (un alfabeto) y generar sus combinaciones (palabras), manteniendo así el orden lexicográfico creciente.

Adicionalmente, en el programa se adjunta el cálculo de las combinaciones de manera teórica por la fórmula: 

```
C(n,r) = n! / (n-r)! r!
```

y compara el valor obtenido teórico con el contador obtenido, en caso de ser iguales, el algoritmo generó con éxito todas las combinaciones posibles.

### Validación de entrada
El algoritmo asume que los valores de n y r deben estar dentro de este rango: 
- n >= 1
- r >= 0 y r <= n

Es un prerequisito para el cálculo teórico de las combinaciones y del algoritmo en sí.

### Formato de salida
El programa genera un archivo .csv el cual consiste en n columnas, las cuales cada una contiene un elemento de la combinación en m renglones. Donde n = r y m = número de combinaciones. El nombre del archivo tiene el siguiente formato:

```
r_Combinaciones_n_r.csv
```
y se encuentra en la ruta:

```
../GenerarCombinacionesLex/Combinaciones/r_Combinaciones_n_r.csv
```

## Estructura del repositorio
* Combinaciones: Aquí se encuentran los archivos .csv crudros de las combinaciones.
* Documentation/html: Contiene los archivos necesarios para abrir la documentación de Doxygen.
* Doxygen: Archivo de formato para Doxygen.
* **<ins>Documentacion.lnk : Documentación del código fuente.</ins>**

## Archivos de código
* FuncionesAuxiliares.hpp: Prototipos de las funciones auxiliares.
* main.cpp : Código fuente principal.
* FuncionesAuxiliares.cpp: Definiciones de las funciones auxiliares.
  
## Requisitos del sistema
* C++ 20
* Compilador g++
* Visual Studio 2022 (para Windows)

> [!WARNING]
> El programa fué escrito en una computadora con sistema operativo Windows 11, es posible que algunas instrucciones arrojen una advertencia en Linux.

## Instrucciones de compilación

### Linux
1. Clone el repositorio:
```
git clone https://github.com/Cydraa/CombinacionesLex.git
cd CombinacionesLex/GenerarCombinacionesLex/
```
2. Compile el código
```
g++ -o combinaciones main.cpp FuncionesAuxiliares.cpp -std=c++20
```

3. Ejecute el programa
```
./combinaciones
```

### Windows
1. Clone el repositorio:
```
git clone https://github.com/Cydraa/CombinacionesLex.git
cd CombinacionesLex/GenerarCombinacionesLex/
```
2. En la carpeta CombinacionesLex/GenerarCombinacionesLex/, abrir el archivo GenerarCombinacionesLex.sln usando Visual Studio 2022.
3. Compile el código: haciendo click derecho sobre la solución en el explorador de la solución (Build Solution...) o pulsando CTRL+SHIFT+B.
5. Ejecute el programa: Pulse CTRL+F5 o haga click en "Start without debugging" en la parte superior del IDE.
