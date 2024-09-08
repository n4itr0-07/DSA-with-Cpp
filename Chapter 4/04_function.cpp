#include <bits/stdc++.h>
using namespace std;

//TODO: Function Definition
void printHello(){
    cout << "Hello, World!";
}

//Sum of Two Numbers
int sum(int a, int b) {
    int s = a + b;
    return s; // Return the sum
}


int main() {
//TODO: Function Call / Invoke
    printHello();
    cout << endl;
    
    cout << sum(1, 2);
    
    return 0; // Good practice to explicitly return 0 from main
}



//TODO: Some of Two Numbers By Taking Input

// #include <iostream>
// using namespace std;

// // Function to take input and calculate the sum
// int sumOfTwoNumbers() {
//     int num1, num2;

//     // Taking input from the user
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;

//     // Calculating the sum
//     int sum = num1 + num2;
//     return sum; // Returning the sum
// }

// int main() {
//     // Function call and storing the result
//     int result = sumOfTwoNumbers();

//     // Printing the result
//     cout << "The sum of the two numbers is: " << result << endl;

//     return 0;
// }
