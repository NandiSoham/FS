#include <iostream>
#include<math.h>
using namespace std;

int findBinary(int n){
    int ans = 0;
    int i = 0;

    while(n!=0){
    int bit = n&1;
    ans = (bit * pow (10, i))+ans;
    n = n>>1;
    i++;
    }
    return ans;
}

int countBit(int n){
    int count = 0;
    int num = findBinary(n);
    while(num!=0){
        if(num & 1){
            count++;
        }
        num = num>>1;
    }
    return count;
}

int main(){
    int a, b;  
    cout<< " enter the firtst number: ";
    cin>> a;
    int a1 = countBit(a);
    cout<<"no of 1: "<< a1;
    // cout<< "enter the second number: ";
    // cin>> b;

    // int final_ans = countBit(a) + countBit(b);
    // cout<< "total no of 1 present: "<< final_ans;
    return 0;
}