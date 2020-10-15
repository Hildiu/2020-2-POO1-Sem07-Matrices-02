//
// Created by MARIA HILDA BERMEJO RIOS on 10/14/20.
//

#ifndef INC_07_SEMANA___B___PARACOMPLETAR_UFUNCIONES_H
#define INC_07_SEMANA___B___PARACOMPLETAR_UFUNCIONES_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

typedef unsigned int TipoEntero;
const unsigned int MAXFILAS =7;
const unsigned int MAXCOL =5;

TipoEntero **DimensionaMatriz(size_t filas, size_t col);
void LlenaMatriz(TipoEntero **Libros, size_t filas, size_t  col);
void ImprimirMatriz(TipoEntero **Libros, size_t filas, size_t  col);
string DiaQueVendioMenos(TipoEntero **Libros, size_t filas, size_t  col);
size_t NumDeTiendaQueVendioMas(TipoEntero **Libros, size_t filas, size_t  col);
void  EliminarMatriz(TipoEntero  **&Libros, size_t fila);


#endif //INC_07_SEMANA___B___PARACOMPLETAR_UFUNCIONES_H
