#ifndef __STUDENT_FUNCTIONS_H
#define __STUDENT_FUNCTIONS_H

#include <string>
#include <vector>
using namespace std;

typedef struct student{
    int id;
    string name; 
    vector<int> hw_grades;
    int midterm;
    int final;
} student;

student get_student_struct_data();
void output_student_struct_data(const student & s);
double compute_class_score(const student & s);

#endif