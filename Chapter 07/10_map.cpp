#include <iostream>
#include <map>
using namespace std;


int main() {

    map<string, int> m;

    m["Tv"] = 500;
    m["Mobile"] = 200;
    m["Tab"] = 300;
    m["Laptop"] = 600;
    m["Desktop"] = 700;

    m.insert({"Fridge", 800});
    m.emplace("AC", 1000);
    
    for(auto pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }
    cout << endl;

    cout << "Count = " << m.count("Tv") << endl;

    //TODO: Find operation
    if(m.find("Tv") != m.end()) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    //  m.find("Tv"); // If found will return the iterator to the element else will return the iterator to the end of the map
    
    return 0;
}