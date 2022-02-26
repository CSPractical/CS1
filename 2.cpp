#include <iostream.h>
#include <conio.h>

class circle
{
private:
    float r, a, c, x, y;

public:
    circle()
    {
        r = 7;
        x = 6;
        y = 8;
    }
    void area()
    {
        a = 3.14 * r * r;
    }
    void circum()
    {
        c = 2 * 3.14 * r;
    }
    void print()
    {
        cout << "The radius of the circle is " << r << endl;
        cout << "The x coordinate of the circle is " << x << y << endl;
        cout << "The area of the circle is " << a << endl;
        cout << "The circumference of the circle is " << c << endl;
    }
};

void main()
{
    clrscr();
    circle c;
    c.area();
    c.circum();
    c.print();
    getch();
}