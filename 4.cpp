#include <iostream.h>
#include <conio.h>
#include <string.h>

char reverse(char[]);

void main()
{
    clrscr();
    char strev[80];
    cout << "Entern the string: ";
    cin.getline(strev, 80, '\n');
    cout << "Given string is " << strev << endl;
    reverse(strev);
    cout << "Reversed string is " << strev << endl;
    getch();
}

char reverse(char xt[])
{
    char t;
    int i, len;
    len = strlen(xt);
    for (i = 0; i < len / 2; i++)
    {
        t = xt[i];
        xt[i] = xt[len - i - 1];
        xt[len - i - 1] = t;
    }
    return 0;
}