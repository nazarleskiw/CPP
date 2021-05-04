#include <iostream>
#include <string>

using namespace std;

struct student
  {
    string name;
    string surname;
    int age;
    long indexNr;
    double avGrade;
  };

enum menu
  {
     endprogram, show, modify
  };

student addStudent();

void showStudent(student student1);

int main()
{
    student student1;
    student1 = addStudent();

    int choice = -1;
    do
      {
        cout << "Wybierz co chcesz zrobic:"<< endl ;
        cout << "1- Wyswietl dane"<< endl;
        cout << "2- Modyfikuj dane"<< endl;
        cout << "0- Zakończ program"<< endl;
        cin >> choice;

        switch (choice)
          {
            case endprogram:
            {
              cout << "Program konczy dzialanie"<< endl;
              break;
            }
          case show:
            {
              void showStudent(student student1);
              break;
            }
            case modify:
            {
              student1 = addStudent();
              break;
            }
            default:
            {
              cout << "Wybrano bledna opcje" << endl;
              break;
            }
          }
      }
    while (choice !=0);


 return 0;
}

student addStudent()
  {
    student studentTemp;
    cout << " Wprowadz dane studenta" << endl ;
    cout << " Wprowadz imie: " ;
    cin >> studentTemp.name ;
    cout << "Wprowadz nazwisko: ";
    cin >> studentTemp.surname;
    cout << "Wprowadz wiek: ";
    cin >> studentTemp.age;
    cout << "Wprowadz numer indeksu: ";
    cin >> studentTemp.indexNr ;
    cout << "Wprowadz srednia ocen: ";
    cin >> studentTemp.avGrade ;

    return studentTemp;
  }

void showStudent(student student1)
  {
    cout<< "Dane studenta: " << endl;
    cout<< student1.name << " " << student1.surname << " wiek: " <<  student1.age << " nr indexu: " << student1.indexNr << " srednia ocen: " << student1.avGrade;
  }
