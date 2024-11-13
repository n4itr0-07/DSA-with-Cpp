//TODO: 1. Program to break a number into its factors
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number to find its factors: ";
//     cin >> num;

//     // Loop to find all factors of the number
//     cout << "Factors of " << num << " are: ";
//     for (int i = 1; i <= num; ++i) {
//         if (num % i == 0) { // If divisible, it's a factor
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

//TODO: 2. Program to generate prime series from 1 to 100
// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
//     for (int i = 2; i <= n / 2; ++i) {
//         if (n % i == 0) return false; // If divisible, not a prime number
//     }
//     return true;
// }

// int main() {
//     cout << "Prime numbers between 1 and 100 are:\n";
//     for (int i = 2; i <= 100; ++i) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

//TODO: 3. Program to demonstrate the use of static data members
// #include <iostream>
// using namespace std;

// class Counter {
// private:
//     static int count; // Static data member declaration
// public:
//     Counter() { count++; } // Constructor increments count

//     static void showCount() { // Static member function to display count
//         cout << "Number of objects created: " << count << endl;
//     }
// };

// // Definition and initialization of static data member
// int Counter::count = 0;

// int main() {
//     Counter c1, c2, c3; // Creating objects
//     Counter::showCount(); // Calling static member function
//     return 0;
// }

//TODO: 4. Program to demonstrate the use of friendly functions
// #include <iostream>
// using namespace std;

// class Sample {
// private:
//     int num;
// public:
//     Sample(int n) : num(n) {} // Constructor to initialize num

//     // Friend function declaration
//     friend void showNumber(Sample s);
// };

// // Friend function definition
// void showNumber(Sample s) {
//     cout << "The number is: " << s.num << endl;
// }

// int main() {
//     Sample obj(42); // Create an object with value 42
//     showNumber(obj); // Call the friend function
//     return 0;
// }

//TODO: 5. Program to demonstrate the use of zero-argument and parameterized constructors
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
public:
    // Zero-argument constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle r1; // Calls zero-argument constructor
    Rectangle r2(5, 10); // Calls parameterized constructor

    cout << "Rectangle 1: ";
    r1.display();
    
    cout << "Rectangle 2: ";
    r2.display();
    
    return 0;
}