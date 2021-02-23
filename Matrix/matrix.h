#ifndef MATRIX_H_
#define MATRIX_H_

template <class Type>
class Matrix
{

   public :

	int column;
        int row;
        int transponse;
        Type ** matrix;
        Type value;
	int column_2;
	int row_2;
	Type ** matrix_2;
	Type value_2;

	Matrix(); // konstruktor domyślny
	Matrix(const Matrix& m); // konstruktor kopiujący;
	~Matrix(); // destruktor domyslny

	void Show(); // wyświetla macierz

	void operator+ (const Matrix& m); // operator dodawania macierzy
	void operator* (const Matrix& m); // operator mnożenia macierzy
	void operator+ (int s); //operator dodowania skalara do macierzy
	void operator* (int s); //operator mnożenia macierzy przez skalar
};

template <class Type>
Matrix<Type>::Matrix()
{

        std::cout << " Podaj rozmiar tablicy " << std::endl;
        std::cout << " Ile ma mieć wierszy ? " << std::endl;
        std::cin >> row;
        std::cout << " Ile ma posiadać kolumn ? " << std::endl;
        std::cin >> column;

        matrix = new Type * [row];

        int j = 0; // licznik kolumn
        int i = 0; // licznik wierszy

        while ( i < row )
        {
                matrix[i] = new Type [column];
                i++;
        }

        i = 0;

        while ( i < row )
        {

                while ( j < column )
                {
                std::cout << " Podaj wartość komórki o lokalizacji [" << i + 1 <<"][" << j + 1 <<"]." << std::endl;
                std::cin >> value;

                matrix[i][j] = value;

                j++; 
                }

        j = 0;
        i++;
        }

   std::cout << std::endl;
}

template <class Type>
Matrix<Type>::Matrix(const Matrix& m) //konstruktor kopiujący
{
        column = m.column;
        row = m.row;

        matrix = new Type * [row];

        int i = 0; // licznik wierszy
        int j = 0; //licznik kolumn

        while ( i < row )
        {
                matrix[i] = new Type [column];
                i++;
        }

         i = 0;

        while ( i < row )
        {

                while ( j < column )
                {

                matrix[i][j] = m.matrix[i][j];
                j++;

                }

        j = 0;
        i++;
        }


}

template <class Type>
Matrix<Type>::~Matrix()
{
        int i = 0;
        while ( i < row )
        {
                delete [] matrix[i];
                i++;
        }

}

template <class Type>
void Matrix<Type>::Show()
{
        int i = 0; //licznik wierszy
        int j = 0; // licznik kolumn

        std::cout << "Macierz zbudowana jest z " << column << " kolumn oraz " << row << " wierszy." << std::endl;
        std::cout << std::endl;

        while ( i < row )
        {

                while ( j < column )
                {

                // std::cout << " Lokalizacja komórki w macierzy nr wiersza : " << i + 1 << " i nr kolumny : " << j + 1 << "." << " Wartość : "
                // << matrix[i][j] << std::endl;

                std::cout << matrix[i][j] << " | ";

                j = j + 1;

                }

        std::cout << std::endl;
        j = 0;
        i = i + 1;
        }

}

template <class Type>
void Matrix<Type>::operator+ (const Matrix & m)
{
        //Sprawdzam najpierw czy wielkość obu macierzy jest identyczna.
        // Jeśli tak program umożliwi dodanie ze sobą macierzy
        // winnym wypadku zakończy program i wyrzuci odpowiedni komunikat

        if ( row == m.row && column == m.column )
        {

        int i = 0; // licznik wierszy
        int j = 0; //licznik kolumn

        while ( i < row )
        {

                while ( j < column )
                {

                matrix[i][j] = matrix[i][j] + m.matrix[i][j];
                j++;

                }

        j = 0;
        i++;
        }


        }
        else
        {
        std::cout << " Macierze nie są tej samej wielkości. Nie możliwe jest dodanie ich do siebie !!!" <<std::endl;
        }

}

template <class Type>
void Matrix<Type>::operator* (const Matrix & m)
{
        if ( column == m.row )
        {

        int i = 0; // licznik wierszy
        int j = 0; //licznik kolumn
        int i_2 = 0; // licznika wierszy macierzy m
        int j_2 = 0; //licznika kolumn macierzy m

        row_2 = m.column;
        column_2 = row;

        matrix_2 = new Type * [row_2];//

	 while ( i < row_2 )
        {
                matrix_2[i] = new Type [column_2];
                i++;
        }

        i = 0;
        value_2 = 0;
        value = 0;

                while ( i < row )
                {
                        while ( j < m.column )
                        {
                                while ( j_2 < m.row )
                                {
                                        value = matrix[i][j_2] * m.matrix[j_2][j];
                                        value_2 = value_2 + value;

                                        j_2++;
                                }
                                matrix_2[i][j] = value_2;

                                j_2 = 0;
                                value_2 = 0;
                                j++;
                        }
                j = 0;
                i++;
                }


        row = row_2;
        column = column_2;
        matrix = matrix_2;

        }
        else
        {
           std::cout << "By móc przemnożyć siebie macierze musi być spełniony warunek : Liczba kolumn pierwszej macierzy = liczba wierszy drugiej macierzy. " << std::endl;
        }
}

template <class Type>
void Matrix<Type>::operator+ (int s)
{
        std::cout << " Nie możliwe jest dodawania skalara do macierzy !!!" << std::endl;
}

template <class Type>
void Matrix<Type>::operator* (int s)
{
         int i = 0; // licznik wierszy
        int j = 0; //licznik kolumn

        while ( i < row )
        {

                while ( j < column )
                {

                matrix[i][j] = matrix[i][j] * s;
                j++;

                }

        j = 0;
        i++;
        }

}

#endif
