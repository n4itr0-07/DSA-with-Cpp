#include <iostream>
using namespace std;

class Loading{
public:

    void display(){
        cout << "--------------------" << endl;
        cout << "Function Overloading" << endl;
        cout << "--------------------" << endl;
    }


    void sum(int a, int b){
        cout << "Sum: " << a+b << endl;
    }

    void sum(int a, int b, int c){ // Function Overloading
        cout << "Sum: " << a+b+c << endl;
    }


};

int main() {
    Loading a;
    a.display();
    a.sum(10, 20);
    a.sum(10, 20, 30);


    return 0;
}