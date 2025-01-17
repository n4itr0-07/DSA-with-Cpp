#include <iostream>
using namespace std;


// FUnction inside classes
class Cricket{
public:
    string name;
    int age;
    int runs;
    int wickets;
    int balls;
    int overs;
    float economy;
    float average;
    float strikeRate;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Runs: " << runs << endl;
        cout << "Wickets: " << wickets << endl;
        cout << "Balls: " << balls << endl;
        cout << "Overs: " << overs << endl;
        cout << "Economy: " << economy << endl;
        cout << "Average: " << average << endl;
        cout << "Strike Rate: " << strikeRate << endl;
    }

    void calculateEconomy(){
        economy = runs/overs;
    }

    void calculateAverage(){
        average = runs/wickets;
    }

    void calculateStrikeRate(){
        strikeRate = runs/balls;
    }
};

int main() {
    Cricket c1;
    c1.name = "Virat Kohli";
    c1.age = 32;
    c1.runs = 12000;
    c1.wickets = 4;
    c1.balls = 10000;
    c1.overs = 100;
    c1.calculateEconomy();
    c1.calculateAverage();
    c1.calculateStrikeRate();
    c1.display();

    return 0;
}