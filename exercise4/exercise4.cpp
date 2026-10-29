// SECJ1013 PROGRAMMING TECHNIQUE I
// EXERCISE 4

// Name:_________________________   Matric:____________________________

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int SIZE = 4;
const int size2 = 5;
struct Student {
    string name[size2] = { "Aina Faris", "Amirul Hakim", "Siti Nur Aisyah", "Muhammad Irfan", "Nurul Izzati" };
    double exercise[size2] = { 85.50, 88.00, 91.00, 77.00, 84.00};
    double assignment[size2] = {90.00, 76.50, 89.50, 82.50, 87.00};
    double test[size2] = {78.50, 92.00, 85.00, 79.50, 90.50};
    double exam[size2] = {};
    double totalscore;
};
int main()
{
    double weights[SIZE] = {0.15, 0.20, 0.25, 0.30};


    cout <<"----------------------------------------------------------------------\n";
    cout << "| No | Name                | Exercise | Assignment | Test   | Exam   |\n";
    cout <<"----------------------------------------------------------------------\n";
    Student student;
    for (int i = 0; i < size2; i++) {
        cout << "| " << setw(2) << i + 1 << " | " << setw(18) << student.name[i] << " | "
             << setw(8) << student.exercise[i] << " | " << setw(10) << student.assignment[i] << " | "
             << setw(6) << student.test[i] << " | " << setw(6) << student.exam[i] << " |\n";
    }
    system("pause");
    return 0;

}