#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string, int> m;

    m.emplace("Tv", 500);
    m.emplace("Tv", 500);
    m.emplace("Tv", 500);
    m.emplace("Tv", 500);
    m.emplace("Tv", 500);
    m.emplace("Tv", 500); // Duplicate Key allowed in multimap

    //TODO: Erase operation
    m.erase("Tv"); // Erase all the elements with key "Tv"
    // m.erase(m.find("Tv")); // Erase only the first element with key "Tv"

    //TODO: Insert operation
    m.insert({"Mobile", 200});
    m.insert({"Tab", 300});

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;


    return 0;
}