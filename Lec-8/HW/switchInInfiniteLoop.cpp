#include <iostream>
using namespace std;

int main()
{
   int n;
    cin >> n;
    while(INT_MIN){
        switch (n){
            case 1: cout <<"bla"<< endl;
            break;
            case 2: cout << "int" << endl;
            default: cout << "defalut" << endl;
        }
        exit(0);    // if we don't use 'exit(0)', the switch statement will get stuck in a infinite while loop, In order to get out from the infinite loop we've used 'exit(0)'.
    }
    return 0;

}