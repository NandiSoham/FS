#include <iostream>
using namespace std;

//function declare
void printCounting(int n){          // when a function is nor returning anything then we can use the keyword 'void'
    //function body
    for(int i = 1; i<=n; i++){
        cout<< i <<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<< " enter the number:"<<endl;
    cin>> n;

    //function call
    printCounting(n);
    return 0;
}