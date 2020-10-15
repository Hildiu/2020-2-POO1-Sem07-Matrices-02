#include "UFunciones.h"

int main()
{
  TipoEntero **Libros= nullptr;

  srand(time(nullptr));
  Libros=DimensionaMatriz(MAXFILAS, MAXCOL);
  LlenaMatriz(Libros, MAXFILAS, MAXCOL);
  ImprimirMatriz(Libros, MAXFILAS, MAXCOL);
  cout << "\nSe vendió menos libros el día : " << DiaQueVendioMenos(Libros, MAXFILAS, MAXCOL);
  //cout <<"\nEl número de la tienda que vendió mas libros es : " << NumDeTiendaQueVendioMas(Libros,MAXFILAS, MAXCOL);
  EliminarMatriz(Libros, MAXFILAS);

  return 0;
}
