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
    Student uczen2("Paweł", "Kimel", "22222222222");
    Student uczen3("Grzegorz", "Król", "42213732535");
    Teacher nauczyciel("Jan", "Kowalski", "12345678901");
    Head_Teacher dyrektor("Dyrektor", "Duda", "09876543210");
    Class klasa;
    //Person osoba("Robert", "Kubica", "91203712085");
    Student uczen4 = uczen1;

    uczen1.info();
    uczen2.info();
    uczen3.info();
    uczen4.info();
    nauczyciel.info();
    dyrektor.info();
    nauczyciel.addGrade(uczen1, 5);
    nauczyciel.addGrade(uczen1, 2);
    nauczyciel.addGrade(uczen2, 1);
    nauczyciel.addGrade(uczen3, 6);
    uczen1.printGrades();
    uczen2.printGrades();
    uczen3.printGrades();
    cout << endl;
    dyrektor.addClassTeacher(nauczyciel, klasa);
    dyrektor.addStudent_to_Class(uczen1, klasa);
    dyrektor.addStudent_to_Class(uczen2, klasa);
    dyrektor.addStudent_to_Class(uczen3, klasa);
    cout << "Class: " << endl;
    klasa.printClass();

    return 0;
}