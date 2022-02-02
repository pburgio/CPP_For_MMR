#include <iostream>
using namespace std;

#include "Rectangle.hpp"

int main()
{
    Rectangle *r0 = new Rectangle();
    Rectangle *r1 = new Rectangle(10, 20);

    // this is not legal. Use r0->SetHeight(2) instead
    //r0->_height = 2;

    // You might want to check using
    // int h = r0->GetHeight();

    int area = r1->Area();

    cout << "Area is " << area << endl;

    r1->~Rectangle();
    r0->~Rectangle();
    
    return 0;
}