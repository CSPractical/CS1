#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int a[10], i, j, temp;
    cout << "Enter the elements of array" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "\nOriginal array is" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "\nAfter Bubble sort Ascending order is\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    getch();
}