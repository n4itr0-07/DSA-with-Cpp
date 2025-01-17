#include <iostream>
using namespace std;

class Cricket{
public:
    string name;
    int runs;
    float avg;

    Cricket(string n, int r, float a){
        name = n;
        runs = r;
        avg = a;
    }
};

int main() {
   Cricket c1("Virat Kohli", 12000, 59.3);
   
   Cricket* p1 = &c1;
    cout << "Name: " << p1->name << endl;
    cout << "Runs: " << p1->runs << endl;
    cout << "Average: " << p1->avg << endl;

    cout << "---------------------" << endl;

    // We can also use new keyword to create object of class and store it in pointer variable.
    Cricket* p2 = new Cricket("Sachine Tendulkar", 15000, 55.3);

    cout << "Name: " << p2->name << endl;
    cout << "Runs: " << p2->runs << endl;
    cout << "Average: " << p2->avg << endl;


    return 0;

}