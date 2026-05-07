// WAP to explain multi level inheritance using cricket and runs
#include <iostream>
using namespace std;

class CricketPlayer {
protected:
    string name;
    string team;

public:
    void getPlayerDetails() {
        cout << "Enter player name: ";
        getline(cin, name);

        cout << "Enter team name: ";
        getline(cin, team);
    }
};

class Match : public CricketPlayer {
protected:
    int matches;

public:
    void getMatchDetails() {
        cout << "Enter number of matches played: ";
        cin >> matches;
    }
};

class Runs : public Match {
private:
    int totalRuns;

public:
    void getRunDetails() {
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
    }

    void displayDetails() {
        cout << "\n--- Cricket Player Details ---" << endl;
        cout << "Player Name: " << name << endl;
        cout << "Team Name: " << team << endl;
        cout << "Matches Played: " << matches << endl;
        cout << "Total Runs: " << totalRuns << endl;

        if (matches > 0) {
            cout << "Average Runs: " << (float)totalRuns / matches << endl;
        } else {
            cout << "Average Runs: 0" << endl;
        }
    }
};

int main() {
    Runs player;

    player.getPlayerDetails();
    player.getMatchDetails();
    player.getRunDetails();
    player.displayDetails();

    return 0;
}
