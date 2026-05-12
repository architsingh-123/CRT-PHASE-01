
#include <iostream>
using namespace std;

class Area {
    private:
        float length, width;

    public:
        Area(float l, float w) : length(l), width(w) {}

        float getRectangleArea() {
            return length * width;
        }

        float getSquareArea() {
            return length * length;
        }
};

int main() {
    Area rect(5.0, 3.0);
    Area square(4.0, 4.0);

    cout << "Area of rectangle: " << rect.getRectangleArea() << endl;
    cout << "Area of square: " << square.getSquareArea() << endl;

    return 0;
}