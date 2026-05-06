// wap with a students class with data members name, roll number and marks 
#include <iostream>
#include <string>   
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
        float marks;

    public:
        
        Student(string n, int r, float m) : name(n), rollNumber(r), marks(m) {}

        
        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
        }
};  

int main() {
    Student s1("Archit", 1, 95.5);
    s1.display();

    return 0;
}
