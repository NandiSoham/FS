#include <iostream>
using namespace std;

int main()
{
    //----------IF LOOP---------
    // int n;
    // cin >> n; /*'cin' asking for value of n*/

    // if (n > 0)
    // {
    //     cout << "n is positive" << endl;
    // }
    // else
    // {
    //     cout << "n is negetive" << endl;
    // }
    // int a,b;
    //------------------------------
    // cout<< "Enter the value of A:"<< endl;
    // cin>> a;

    // cout<< "Enter the value of B:"<<endl;
    // cin>>b;

    // if(a>b){
    //     cout<< "A is greter than B"<<endl;
    // }
    // if(b>a){
    //     cout<<"B is greater than A"<< endl;
    // }
    //-----------ELSE IF------------
    // int a;
    // cout << "Enter the value of A:" << endl;
    // cin >> a;

    // if (a < 0)
    // {
    //     cout << "A is negetive" << endl;
    // }
    // else if (a > 0)
    // {
    //     cout << "A is positive" << endl;
    // }
    // else
    // {
    //     cout << "A is O" << endl;
    // }
    // ------------WHILE-----------------------

    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << " ";
    //     i = i + 1;
    // }

    // -------------------SUM using WHILE-----------

    // int n;
    // cin >> n;

    // int i = 1;
    // int sum = 0;

    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout << "Sum is:" << sum << endl;

    // ------------------PRIME OR NOT-----------------

    // int x;
    // cin >> x;

    // int i = 2;
    // while (i < x)
    // {
    //     if (x % i == 0)
    //     {
    //         cout << "Not Prime for" << i << endl;
    //     }
    //     else
    //     {
    //         cout << "Prime for" << i << endl;
    //     }
    //     i = i + 1;
    // }

    // ------------------PATTERN-------------------

    //     int n;
    //     cin >> n;
    //     int i = 1;

    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= n)
    //         {
    //             cout << "*";
    //             j = j + 1;
    //         }
    //         cout << endl;

    //         i = i + 1;
    //     }
    //

    // -------------------ANOTHER PATTERN------------

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}