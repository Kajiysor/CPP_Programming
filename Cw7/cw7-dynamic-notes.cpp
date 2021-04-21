
//Time *timePtr = new Time();
//delete timePtr;

//double *ptr = new double( 3.14159 );
//Time *timePtr = new Time( 12, 45, 0 );


//int *gradesArray = new int[ 10 ]();
//delete [] gradesArray;

#include <iostream>

int main() {
    double *ptr = new double(3.2);
    std::cout << *ptr << std::endl;
    
    int *grades = new int[3];
    grades[0] = 0;
    grades[1] = 1;
    std::cout << grades[0] << ' ' << grades[1] << ' ' << grades[2] << std::endl;
    
    delete ptr;
    delete [] grades;
    
}

