#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char operation;

    cout<<"enter the 1st value:"<< endl;
    cin>>a;

    cout<<"enter the secoond value:"<<endl;
    cin>>b;

    cout<<"enter the oeration:"<<endl;
    cin>>operation;

    switch(operation){
        case '+': cout<<"result of addition is:"<<(a+b)<<endl;
        break;

        case '-': cout<<"result of substraction is:"<<(a-b)<<endl;
        break;

        case '*': cout<<"result of multiplication is:"<<(a*b)<<endl;
        break;

        case '/': cout<<"result of division is:"<<(a%b)<<endl;
        break;

        default: cout<<"enter valid operation"<<endl;
        break;
    }


}