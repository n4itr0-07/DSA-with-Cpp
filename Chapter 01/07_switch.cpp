#include <iostream>
using namespace std;

/*
Take the day number and print the corresponding day.
For 1, print Monday.
For 2, print Tuesday, and so on.
For 7, print Sunday.
*/

int main() {
    int day;
    cout << "Enter the day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;

        case 7:
            cout << "Sunday" << endl;
            break;

        default:
            cout << "Invalid day number" << endl;
            break;
    }

    cout << "************************** This is your day! ********************************" << endl;
    return 0;
}
