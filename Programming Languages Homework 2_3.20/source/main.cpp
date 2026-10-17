#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours, rate, salary;

    cout << fixed << setprecision(2);

    cout << "Enter # of hours worked (-1 to end): ";
    cin >> hours;

    while (hours != -1) {
        cout << "Enter hourly rate of the worker ($00.00): ";
        cin >> rate;

        if (hours <= 40) {
            salary = hours * rate;
        }
        else {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }

        cout << "Salary is $" << salary << endl;
        cout << endl;

        cout << "Enter # of hours worked (-1 to end): ";
        cin >> hours;
    }
	system("pause");
    return 0;
}