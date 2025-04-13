# CombinacionesLex
Este programa genera todas las r-combinaciones en orden lexicográfico de un conjunto.

Autor: Ana Paulina Sortillón Sortillón

## Descripción del algoritmo


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
