
// Definition of class GradeBook that uses a
// two-dimensional array to store test grades.
// Member functions are defined in GradeBook.cpp
#include <array>
#include <string>

// GradeBook class definition
class GradeBook
{
public:
    // constants
    static const size_t students = 10; // number of students
    static const size_t tests = 3;     // number of tests

    // constructor initializes course name and array of grades
    GradeBook(const std::string &,
              std::array<std::array<int, tests>, students> &);

    void setCourseName(const std::string &); // set the course name
    std::string getCourseName() const;       // retrieve the course name
    void displayMessage() const;             // display a welcome message
    void processGrades() const;              // perform operations on the grade data
    int getMinimum() const;                  // find the minimum grade in the grade book
    int getMaximum() const;                  // find the maximum grade in the grade book
    double getAverage(const std::array<int, tests> &) const;
    void outputBarChart() const; // output bar chart of grade distribution
    void outputGrades() const;   // output the contents of the grades array
private:
    std::string courseName;                              // course name for this grade book
    std::array<std::array<int, tests>, students> grades; // 2D array
};                                                       // end class GradeBook
