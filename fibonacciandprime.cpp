#include <iostream>
using namespace std;

void fib()
{
    static int f = 1, s = 1, t;
    cout << f;
    t = f + s;
    f = s;
    s = t;
}

void prime(){
    static int n = 2;
    int flag = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if(n==2){
        cout << 2;
        n++;
    }
    else if(flag == 0){
        cout << n;
        n++;
    }
    else{
        n++;
        prime();
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        
        if(i%2!=0)
            fib();
        else
            prime(); 
        if(i != n){
            cout << ", ";
        }       
    }
    return 0;
}