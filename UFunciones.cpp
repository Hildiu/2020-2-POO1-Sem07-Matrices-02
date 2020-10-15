//
// Created by MARIA HILDA BERMEJO RIOS on 10/14/20.
//

#include "UFunciones.h"

TipoEntero **DimensionaMatriz(size_t filas, size_t col)
{//----------------------------------------------------
  TipoEntero  **L=nullptr;

  L = new TipoEntero*[filas];
  for(size_t f=0; f<filas; f++)
    L[f] = new TipoEntero[col];
  return L;
}

void LlenaMatriz(TipoEntero **Libros, size_t filas, size_t  col)
//----------------------------------------------------------------
{
  for(size_t f=0; f<filas; f++)
    for(size_t c=0; c<col; c++)
      Libros[f][c] = rand() %1000;
}

void ImprimirMatriz(TipoEntero **Libros, size_t filas, size_t  col)
//----------------------------------------------------------------
{
  cout << "\n\n";
  for(size_t f=0; f<filas; f++) {
    for (size_t c = 0; c < col; c++)
      cout << setw(7) << Libros[f][c];
    cout << "\n";
  }
}


string DiaQueVendioMenos(TipoEntero **Libros, size_t filas, size_t  col)
{//---------------------------------------------------------------------

  string Dias[5]= {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};
  TipoEntero *A = new TipoEntero[MAXCOL]();  //-- Se inicializa con cero cada casillero.

  for (size_t c = 0; c < col; c++)
  {
    TipoEntero Suma=0;
    for(size_t f=0; f<filas; f++)
      Suma+= Libros[f][c];
    A[c]=Suma;
  }
  //--- hallamos la posicion del menor en array A
  TipoEntero  menor = A[0];
  size_t posdelMenor=0;
  for(size_t i=1; i<MAXCOL;i++)
    if( A[i]<menor) {
      menor = A[i];
      posdelMenor = i;
    }
  return Dias[posdelMenor];
}

void   EliminarMatriz(TipoEntero **&Libros, size_t filas)
{
  for(size_t f=0; f<filas; f++)
    delete []Libros[f];
  delete []Libros;
  Libros= nullptr;
}
