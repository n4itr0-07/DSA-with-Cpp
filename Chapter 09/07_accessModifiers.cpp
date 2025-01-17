#include <iostream>
using namespace std;

class Example {
// By default all the members of a class are private
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    void setValues(int priv, int prot, int pub) {
        privateVar = priv;
        protectedVar = prot;
        publicVar = pub;
    }

    void display() {
        cout << "Private Variable: " << privateVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    Example obj;
    obj.setValues(10, 20, 30);
    obj.display();
    // obj.privateVar = 40;   // Error: 'privateVar' is private
    // obj.protectedVar = 50; // Error: 'protectedVar' is protected
    obj.publicVar = 60;      // OK: 'publicVar' is public
    obj.display();
    return 0;
}