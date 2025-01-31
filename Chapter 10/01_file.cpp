// Basic file I/O
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    // Create an output stream to write to the file
    ofstream outputFile("output.txt");
    // Write to the file
    outputFile << "Writing this to a file.\n";
    outputFile << "Writing another line.\n";
    // Close the output stream
    outputFile.close();

    // Create an input stream to read the file
    ifstream inputFile("output.txt");
    // Read the file
    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    } else {
        cout << "Unable to open file for reading" << endl;
    }

    return 0;
}