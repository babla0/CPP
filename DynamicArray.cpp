#include <iostream>
using namespace std;

int main()
{
    int *pointer, n, temp;
    cout << "Enter the size of the array:- ";
    cin >> n;
    pointer = new int[n];
    for (int i = 0; i < n; i++)
    {
        switch (i)
        {
        case 0:
            cout << "Enter the 1st value:- ";
            break;

        case 1:
            cout << "Enter the 2nd value:- ";
            break;
        
        case 2:
            cout << "Enter the 3rd value:- ";
            break;

        default:
            cout << "Enter the " << i+1 << "th value:- ";
            break;
        }
        cin >> *(pointer + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "| " << *(pointer + i) <<" |";
    }
}