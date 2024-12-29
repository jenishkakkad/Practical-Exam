// Q-5
#include <iostream>
using namespace std;


class Rectangle {
private:
    int length;
    int breadth;

public:
   
    Rectangle(int l, int b) 
    {
        length = l;
        breadth = b;
    }

   
    int calculateArea() 
    {
        return length * breadth;
    }
};

int main() {
    int length, breadth;

    
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;

    
    Rectangle rect(length, breadth);

    
    cout << "Area: " << rect.calculateArea() << endl;
 
}