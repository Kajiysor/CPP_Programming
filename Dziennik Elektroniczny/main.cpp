#include <iostream>
//#include <iomanip>
#include <vector>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "head_teacher.h"
#include "class.h"

int main()
{
    Student uczen1("Jonasz", "Gawlik", "01311701310");
    Student uczen2("Grzesiu", "Nazwisko", "XXXXXXXXX");
    Student uczen3("Paweł", "Król", "0000000000000");
    Teacher nauczyciel("Barbara", "Lewandowska", "12345678901");
    Head_Teacher dyrektor("Andrzej", "Gorlich", "09876543210");
    Class klasa;
    Person osoba("Robert", "Kubica", "91203712085");
    Student uczen4 = uczen1;

    uczen1.info();
    uczen4.info();
    // uczen1.info();
    // nauczyciel.info();
    // dyrektor.info();
    // nauczyciel.addGrade(uczen1, 5);
    // nauczyciel.addGrade(uczen1, 2);
    // nauczyciel.addGrade(uczen1, 1);
    // nauczyciel.addGrade(uczen1, 6);
    // uczen1.printGrades();
    //dyrektor.addClassTeacher(nauczyciel, klasa);
    //dyrektor.addStudent_to_Class(uczen1, klasa);
    // dyrektor.addStudent_to_Class(uczen2, klasa);
    // dyrektor.addStudent_to_Class(uczen3, klasa);
    //klasa.printClass();

    return 0;
}