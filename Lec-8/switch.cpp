#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    char ch = '1';

    switch(ch){
        case 1: cout<< "case-1 satisfied"<< endl;
                break;
        case '1': switch(num){
                    case 1: cout<< "nested switch case"<< endl;
                    break;
                    }
                break;
        
        default: cout<< "this is default case"<< endl;

    }

}