#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    area() {
        return length * width;
    }
    perimeter() {
        return 2 * (length + width);
    }
};


int main() {
    Rectangle rect;
    int length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rect.setDimensions(length, width);
    cout << "Area of the rectangle: " << rect.area() << endl;
    cout << "Perimeter of the rectangle: " << rect.perimeter() << endl;

    return 0;
}

