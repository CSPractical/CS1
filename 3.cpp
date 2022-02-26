#include <iostream.h>
#include <conio.h>

class ratio
{
public:
    ratio()
    {
        cout << "The Object is Born" << endl;
    }
    void x()
    {
        cout << "The Object is Alive" << endl;
    }
    ~ratio()
    {
        cout << "The Object Dies" << endl;
    }
};

void main()
{
    clrscr();
    ratio p;
    p.x();
    getch();
}