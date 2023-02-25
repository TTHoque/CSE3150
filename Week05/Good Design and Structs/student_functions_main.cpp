#include "student_functions.h"
#include <iostream>
using namespace std;

int main()
{
    student s;
    s = get_student_struct_data();

    double total_class_score{0.0}, sum{0.0};
    double hw_average{0.0};

   for (auto h_score : s.hw_grades) {
        cout << h_score << " ";
        sum += h_score;
    }
    cout << endl;

    hw_average = sum / s.hw_grades.size();
    cout << "Average homework score: " << hw_average << endl;

    double final_total_score{0.0};
    
    final_total_score = 0.3 * s.midterm + 0.3 * s.final + 0.4 * hw_average;

    cout << "Final total class score: " << final_total_score << endl;
    return 0;
}