#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

    unordered_map<string, int> m;

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

    return 0;

}