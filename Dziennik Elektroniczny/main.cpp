#include <iostream>
#include <vector>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "head_teacher.h"
#include "class.h"
using namespace std;

int main()
{
    Student uczen1("Jonasz", "Gawlik", "11111111111");
    Student uczen2("Paweł", "Kimel", "00213742069");
    Student uczen3("Grzegorz", "Król", "42213732535");
    Teacher nauczyciel("Jan", "Kowalski", "12345678901");
    Head_Teacher dyrektor("Dyrektor", "Duda", "09876543210");
    Class klasa;
    //Person osoba("Robert", "Kubica", "91203712085");
    Student uczen4 = uczen1;

    cout << "Printing information about students:" << endl;
    uczen1.info();
    uczen2.info();
    uczen3.info();
    uczen4.info();
    cout << "Printing information about teacher:" << endl;
    nauczyciel.info();
    cout << "Printing information about head teacher:" << endl;
    dyrektor.info();
    //Dodawanie oceń uczniom przez nauczyciela
    nauczyciel.addGrade(uczen1, 5);
    nauczyciel.addGrade(uczen1, 2);
    nauczyciel.addGrade(uczen2, 1);
    nauczyciel.addGrade(uczen3, 6);
    cout << "Printing students' grades: " << endl;
    uczen1.printGrades();
    uczen2.printGrades();
    uczen3.printGrades();
    cout << endl;
    //Przypisanie nauczyciela do klasy przez dyrektora
    dyrektor.addClassTeacher(nauczyciel, klasa);
    //Dodanie uczniów do klasy przez dyrektora
    dyrektor.addStudent_to_Class(uczen1, klasa);
    dyrektor.addStudent_to_Class(uczen2, klasa);
    dyrektor.addStudent_to_Class(uczen3, klasa);
    cout << "Printing information about class: " << endl;
    klasa.printClass();

    return 0;
}