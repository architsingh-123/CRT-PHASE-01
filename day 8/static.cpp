// wap to explain static function in C++
#include <iostream>
using namespace std;
class Counter {
    private:
        static int count; // static data member
    public:
        Counter(); // constructor
        static int getCount(); // static function
};
int Counter::count = 0; // initialize static data member
Counter::Counter() {
    count++; // increment count whenever an object is created
}
int Counter::getCount() {
    return count; // return the current count
}
int main() {
    Counter c1, c2, c3; // create three objects of Counter
    cout << "Number of Counter objects created: " << Counter::getCount() << endl; // call static function using class name
    return 0;
}
