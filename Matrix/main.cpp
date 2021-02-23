#include <iostream>
#include "matrix.h"

int main()
{
  using namespace std;

  cout << " Tworzę macierz domyslną " << endl;

  Matrix<double> macierz; //podczas tworzenia danej macierzy należy podać jaki będzie typ danych umieszczony w macierzy

  macierz.Show();

  cout << " Tworzę drugą macierz domyślną " << endl;

  Matrix<double> macierz_2 = macierz;

  macierz_2.Show();

  cout << " Mnożę macierz przez 2" << endl;

  macierz * 2;

  macierz.Show();

  cout << " Mnożę macierz nr 1 z macierzą nr2 " << endl;

  macierz*macierz_2;

  macierz.Show();

  cout << " Tworzę macierz nr 3 " << endl;

  Matrix<double> macierz_3;

  cout << " Dodaje do macierzy nr 3 macierz nr 2 " << endl;

  macierz_3 + macierz_2;

  macierz_3.Show();

  return 0;
}
