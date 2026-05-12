// wap to show hierarchial inheritance using football and players
#include <iostream>
using namespace std;
class FootballPlayer {
    public:
        string name;
        string team;

    public:
        FootballPlayer(string n, string t) : name(n), team(t) {}

        void display() {
            cout << "Name: " << name << endl;
            cout << "Team: " << team << endl;
        }
};