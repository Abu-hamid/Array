#include <iostream>
using namespace std;

int fastExpo(int a, int b)
{

    int res = 1;

    while (b > 0)
    {

        if (b & 1)
        {
            // odd
            res = res * a;
        }
        b = b >> 1; // this means divide by 2;
        a = a * a;
    }
    return res;
}

/*

int fastExpo(int a, int b  , int m) {

    int res = 1;

    while(b > 0) {

        if(b&1) {
            //odd
            res =(1ll* (res) * (a)%m)%m;
        }
        b = b >> 1;//this means divide by 2;
        a =(1ll *( a)%m *( a)%m)%m;
    }
    return res;
}
*/
int main()
{

    int a, b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    cout << "Answer is: " << fastExpo(a, b) << endl;

    return 0;
}