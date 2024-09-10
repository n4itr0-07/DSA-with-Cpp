#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

// Function to calculate area
int calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    Rectangle rect1 = {10, 5};

    // Pass the structure to the function
    int area = calculateArea(rect1);

    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
