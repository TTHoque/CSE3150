#include "student_functions.h"
#include <iostream>
#include <vector>

using namespace std;

double compute_class_score(const student & s)
{
    double final_total_score{0.0};
    double sum{0.0}, hw_average{0.0};
    
    for (auto h_score : s.hw_grades) {
        sum += h_score;
    }

    hw_average = sum / s.hw_grades.size();

    final_total_score = 0.3 * s.midterm + 0.3 * s.final + 0.4 * hw_average;
    return final_total_score;
}

student get_student_struct_data() 
{
    student s;
    cout << "Enter the student's id: ";
    cin >> s.id;

    cout << "Enter the student's name: ";
    cin >> s.name;
    
    cout << "Enter the student's midterm: ";
    cin >> s.midterm;

    cout << "Enter the student's final: ";
    cin >> s.final;

    cout << "Enter a homework score: ";
    int score; 
    while(cin >> score) {
        cout << "Enter a homework score (^D to exit): ";
        s.hw_grades.push_back(score);
    }
    
    return s;    
}

void output_student_struct_data(const student & s)
{

}