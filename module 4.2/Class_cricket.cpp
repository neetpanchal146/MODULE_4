#include<iostream>
using namespace std;

class Cricketer {
public:
    
	string name;

    void input_name() {
        cout << "Enter the name of the batsman: ";
        cin >> name;
    }
};

class Batsman : public Cricketer {
    int totalRuns, matchesPlayed;
    float bestPerformance;

public:
    
    void input_data() {
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter total matches played: ";
        cin >> matchesPlayed;
        cout << "Enter best performance (highest runs in a match): ";
        cin >> bestPerformance;
    }

    
    float calculateAverageRuns() {
        return (float)totalRuns / matchesPlayed;
    }


    void display_data() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << calculateAverageRuns() << endl;
    }
};

int main() {
	
    Batsman batsman;

    batsman.input_name();
    batsman.input_data();
    batsman.display_data();

    return 0;
}