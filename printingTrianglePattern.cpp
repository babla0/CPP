#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the triangle:- ";
    cin >> n;
    for (int counter = 0; counter < n; counter++)
    {
        for (int j = 0; j <= counter; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}