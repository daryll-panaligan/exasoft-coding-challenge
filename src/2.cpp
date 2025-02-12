/*
2.  The below code has memory leaks. Please make the necessary modifications to the main()
    function and the Triangle, Rectangle and Shape classes to rectify the leaks.
*/

#include <iostream>

class Shape
{
protected:
    int m_numsides;

public:
    virtual void draw() = 0;
};

class Rectangle : public Shape
{
private:
    bool m_isSquare;

public:
    virtual void draw() { /*draws a rectangle*/ }
};

class Triangle : public Shape
{
private:
    bool m_isEquilateral;

public:
    virtual void draw() { /*draws a triangle*/ }
};

int main()
{
    int t, r;
    std::cout << "Enter number of triangles";
    std::cin >> t;
    std::cout << "Enter number of rectangles";
    std::cin >> r;
    Shape **pShapeArray = new Shape *[t + r];
    for (int i = 0; i < t; i++)
        pShapeArray[i] = new Triangle;
    for (int j = t; j < t + r; j++)
        pShapeArray[j] = new Rectangle;
    for (int k = 0; k < t + r; k++)
        pShapeArray[k]->draw();
}
