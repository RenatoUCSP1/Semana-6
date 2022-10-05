#include <string> 
#include <array>
#include <iostream>
#include <iomanip> // parameterized stream manipulators

class GradeBook {
public:
GradeBook(const std::string& name, 
const std::array<int, students>& gradesArray)
courseName{name}, grades{gradesArray} {
}
void setCourseName(const std::string& name) {
courseName = name; // store the course name
} 
const std::string& getCourseName() const {
return courseName;
}

void displayMessage() const {
std::cout << "Welcome to the grade book for\n" << getCourseName()<< "!" << std::endl;
} 
void processGrades() const {
outputGrades(); 
std::cout << std::setprecision(2) << std::fixed; 
std::cout << "\nClass average is " << getAverage() << std::endl;

std::cout << "Lowest grade is " << getMinimum() << "\nHighest grade is " << getMaximum() << std::endl;
outputBarChart(); // display grade distribution chart
}

int getMinimum() const {
int lowGrade{100}; // assume lowest grade is 100
for (int grade : grades) {
if (grade < lowGrade) {
lowGrade = grade; // new lowest grade
} 
} 
return lowGrade; // return lowest grade
} 
int getMaximum() const {
int highGrade{0}; // assume highest grade is 0
for (int grade : grades) {
if (grade > highGrade) {
highGrade = grade; // new highest grade
} 
} 
return highGrade; // return highest grade
} 
double getAverage() const {
int total{0}; // initialize total5
// sum grades in array
for (int grade : grades) {
total += grade;
}
 // return average of grades
return static_cast<double>(total) / grades.size();
}
void outputBarChart() const {
std::cout << "\nGrade distribution:" << std::endl;
// stores frequency of grades in each range of 10 grades
const size_t frequencySize{11}; 
std::array<unsigned int, frequencySize> frequency{};
}