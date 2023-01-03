#include <iostream>
using namespace std;

//1 -> Prime number
//0 -> not a prime number
bool isPrime(int n){
    for(int i = 2; i< n; i++){
        if(n%i == 0){
            return 0;
        }
               // we can write like this also: else{return 1}
    }
    return 1; 
}

int main(){
    int n;
    cout << "enter the number:" << endl;
    cin >> n;

    if (isPrime(n)){
        cout << n << " "<<"is a prime no" << endl; 
    }
    else{
        cout << n << " "<<"is not a prime no" << endl; 
    }


    return 0;
}