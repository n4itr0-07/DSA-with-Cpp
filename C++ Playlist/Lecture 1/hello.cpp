#include <iostream> // Preprocessor Directories

using std:: cin; // We can also use like this of namespace
using std::cout;
using std::endl;

// Let's make own namespace
namespace virus{
    void print(){

    }
    // This is my own namespace
}


int main() {

    //TODO: Using namespace virus Code
    virus::print();
    
    //TODO: Using namespace std Code
    // int num_one, num_two, sum;
    // cout << "\n";
    // cout << "Enter the first number: ";
    // cin >> num_one;

    // cout << "Enter the second number: ";
    // cin >> num_two;

    // sum = num_one + num_two;

    // cout << "The sum of " << num_one << " and " << num_two << " is " << sum << "." << endl;

    //TODO: Calling namespace for each function

    std::cout << "Hello Guys, How are you?" << std::endl;

    return 0;

}