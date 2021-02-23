#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>


inline void eatline()
{
 while(std::cin.get() != '\n')
	continue;
}

class Produkty
{
	public :
	char name[20]; //nazwa produktu
	double amount; // ilosc na magazynie
	double prize; // cena za sztuke 

	Produkty();

};

Produkty::Produkty()
{
	char name_1[20] = " ";
	strcpy(name,name_1);
	amount = 0;
	prize = 0;
}

const char * file = "produkty.dat";
const char * file_2 = "produkty.txt";

using namespace std;

char help[] = "--help";
char txt[] = "txt";
char bin[] = "bin";

int main(int argc, char *argv[])
{
	if (strcmp(argv[1],help) == 0)
	{
	cout << " Program ma mozliwosc zapisywanie stanu magazynu w wersji tekstowej jak i binarnej." << endl;
	cout << " Jeśli chcesz zapisać plik w wersji tekstowej wpisz argument txt " << endl;
	cout << " Jeśli chcesz zapisać plik w wersji binarnej wpisz argument bin " << endl;
	}
	else if(strcmp(argv[1],bin) == 0)
	{
	cout << "Plik będzie zapisany w wersji binarnej. " << endl;
	Produkty pr;
	cout << fixed << right;

// pokaż najpierw zawartość pliku

	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);   //plik binarny

	if (fin.is_open())
	{
		cout << "Aktualna zawartosc pliku " << file << "file :\n";
	while (fin.read((char *) &pr, sizeof pr))
	{
		cout << setw(20) << pr.name << ": " << setprecision(0) << setw(6) << pr.amount << setprecision(2) << setw(6)
		<< pr.prize << endl;
	}
	fin.close();
	}

// dodaj nowe dane jeśli tego żadasz

	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cerr << "Nie można otworzyć pliku " << file << " w celu zapisu nowej zawartości.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Podaj nazwę produktu :" << endl;
	cin.get(pr.name, 20);
	while(pr.name[0] != '\0')
	{
		cout << "Podaj ilosc produktu na magazynie : " << endl;
		cin >> pr.amount;
		cout << "Podaj cene za jedna sztuke : " << endl;
		cin >> pr.prize;
		eatline();
		fout.write((char *) &pr, sizeof pr);
		cout << "Podaj nazwę produktu  :" << endl;
		cout << "Aby zakończyć, wprowadz pusty wiersz " << endl;
		cin.get(pr.name, 20);
	}
	fout.close();

// wyświetl zmieniony powyższy plik

	fin.clear();
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "Oto nowa lista produktów : " << file << endl;
		while (fin.read((char *) &pr, sizeof pr))
		{
			cout << setw(20) << pr.name << ": " << setprecision(0) << setw(6) << pr.amount << setprecision(2)
			<< setw(6) << pr.prize << endl;
		}
	fin.close();
	}
	}
	else if((strcmp(argv[1],txt)) == 0)
	{
	cout << " Plik będzie zapisany w wersji tekstowej " << endl;
	Produkty pr;
        cout << fixed << right;

// pokaż najpierw zawartość pliku

        ifstream fin;
        fin.open(file_2, ios_base::in);   //  zapis pliku w wersji tekstowej

        if (fin.is_open())
        {
                cout << "Aktualna zawartosc pliku " << file << "file :\n";
        while (fin.read((char *) &pr, sizeof pr))
        {
                cout << setw(20) << pr.name << ": " << setprecision(0) << setw(6) << pr.amount << setprecision(2) << setw(6)
                << pr.prize << endl;
        }
        fin.close();
        }

// dodaj nowe dane jeśli tego żadasz

        ofstream fout(file_2, ios_base::out | ios_base::app); // zapisz w wersji tekstowej na końcu listy

        if (!fout.is_open())
        {
                cerr << "Nie można otworzyć pliku " << file << " w celu zapisu nowej zawartości.\n";
                exit(EXIT_FAILURE);
        }

        cout << "Podaj nazwę produktu :" << endl;
        cin.get(pr.name, 20);
        while(pr.name[0] != '\0')
        {
                cout << "Podaj ilosc produktu na magazynie : " << endl;
                cin >> pr.amount;
                cout << "Podaj cene za jedna sztuke : " << endl;
                cin >> pr.prize;
                eatline();
                fout.write((char *) &pr, sizeof pr);
                cout << "Podaj nazwę produktu  :" << endl;
                cout << "Aby zakończyć, wprowadz pusty wiersz " << endl;
                cin.get(pr.name, 20);
        }
        fout.close();

// wyświetl zmieniony powyższy plik

        fin.clear();
        fin.open(file_2, ios_base::in);
        if (fin.is_open())
        {
                cout << "Oto nowa lista produktów : " << file << endl;
                while (fin.read((char *) &pr, sizeof pr))
                {
                        cout << setw(20) << pr.name << ": " << setprecision(0) << setw(6) << pr.amount << setprecision(2)
                        << setw(6) << pr.prize << endl;
                }
        fin.close();
        }

	}
	else
	{
	cout << "Nie znany parametr programu." << endl;
	cout << " Użyj parametru --help by uzyskac wiecej informacji. " << endl;
	}
	cout << "Koniec programu." << endl;
	return 0;

}

