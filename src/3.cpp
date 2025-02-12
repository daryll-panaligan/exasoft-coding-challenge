/*
3. Which of the three lines in void main() will give an error and why?
Lets assume that in line 3 in void main(), I wish to copy only the x and y values of p1 into p3 and not
the z value. What changes will you make to the class Point to achieve this?
*/

class Point
{
public:
    Point(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}

private:
    double m_x;
    double m_y;
    double m_z;
};
void main()
{
    Point p1;
    Point p2(1.0, 2.0, 3.0);
    Point p3 = p1;
}
