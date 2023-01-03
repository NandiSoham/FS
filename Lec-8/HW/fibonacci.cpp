#include<iostream>
using namespace std;

int fibonacchi(int n){
    int a = 0;
    int b = 1;
    for(int i = 2; i<=n; i++){
        int nextNum = a+b;
        a = b;
        b = nextNum;
    }
    return b;
}

int main(){
    int n;
    cout << "enter the value of n: ";
    cin>> n;

    int result = fibonacchi(n);
    cout<< "valoue of "<< n <<"th term in series is: "<< result<<endl;
    return 0;
}