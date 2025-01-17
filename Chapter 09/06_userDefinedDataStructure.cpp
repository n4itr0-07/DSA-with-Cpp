#include <bits/stdc++.h>

using namespace std;

int main() {
    // User defined data structure
class Vector {
public:
    int x, y;

    Vector(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    }

    Vector add(Vector v) {
        Vector temp(0, 0);
        temp.x = x + v.x;
        temp.y = y + v.y;
        return temp;
    }

    Vector subtract(Vector v) {
        Vector temp(0, 0);
        temp.x = x - v.x;
        temp.y = y - v.y;
        return temp;
    }


    Vector multiply(Vector v) {
        Vector temp(0, 0);
        temp.x = x * v.x;
        temp.y = y * v.y;
        return temp;
    }

    Vector divide(Vector v) {
        Vector temp(0, 0);
        temp.x = x / v.x;
        temp.y = y / v.y;
        return temp;
    }

    void displayVector() {
        cout << "X: " << x << ", Y: " << y << endl;
    }

};

Vector v1(10, 20);
Vector v2(5, 10);
v1.add(v2).displayVector();

    return 0;
}