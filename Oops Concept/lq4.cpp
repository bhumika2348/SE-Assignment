#include <iostream>
using namespace std;

class Rectangle {
private:
    float width;  
    float height; 

public:

    Rectangle(float w, float h) : width(w), height(h) {}

    
    float calculateArea() {
        return width * height;
    }


    void displayDetails() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    float width, height;

    
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;

   
    Rectangle rect(width, height);

    
    rect.displayDetails();

    return 0; 
}
