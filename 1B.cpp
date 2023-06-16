#include<iostream>
using namespace std;

int main()
{
    float sub_1, sub_2, sub_3, sub_4, sub_5,sub_6;

    float total = 0.00, average = 0.00, percentage = 0.00;
    char grade;

    cout << "Enter the marks of six subjects::\n";
    cin >> sub_1 >> sub_2 >> sub_3 >> sub_4 >> sub_5>> sub_6;

    total = sub_1 + sub_2 + sub_3 + sub_4 + sub_5 + sub_6;
    average = total / 6.0;
    percentage = (total / 600.0) * 100;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80 && average < 90)
        grade = 'B';
    else if (average >= 70 && average < 80)
        grade = 'C';
    else if (average >= 60 && average < 70)
        grade = 'D';
    else
        grade = 'E';

    cout << "\nThe Total marks   = " << total << "/600\n";
    cout << "The Average marks = " << average << "\n";
    cout << "The Percentage    = " << percentage << "%\n";
    cout << "The Grade         = '" << grade << "'\n";
    return 0;
}
