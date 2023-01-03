#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    cout<<"value of a & b:"<<(a&b)<<endl;
    cout<<"value of a | b:"<<(a|b)<<endl;
    cout<<"value of ~a:"<<(~a)<<endl;
    cout<<"value of a ^ b:"<<(a^b)<<endl;
    cout<<"value after doing left swipe once:"<<(a<<1)<<endl;
    cout<<"value after doing left swipe twice:"<<(a<<2)<<endl;
    cout<<"value after doing right swipe once:"<<(a>>1)<<endl;
    cout<<"value after doing right swipe twice:"<<(a>>2)<<endl;

    int i = 9;
    cout<<(i++)<<endl;  //9
    cout<<(++i)<<endl;  // 11
    cout<<(i--)<<endl;  // 11
    cout<<(--i)<<endl;  // 9
    


}