// wap to demonstrate inheritance in C++ using class cricketer and runs
#include <iostream>
using namespace std;
class Cricketer {
    public:
        string name;
        int runs;

    public:
        Cricketer(string n, int r) : name(n), runs(r) {}

        void display() {
            cout << "Name: " << name << endl;
            cout << "Runs: " << runs << endl;
        }
};              




