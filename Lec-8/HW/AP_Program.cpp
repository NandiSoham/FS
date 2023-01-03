#include <iostream>
using namespace std;

int findAP(int n){
    int ans;
    ans = (n*3) + 7;
    return ans;
}

int main()
{
    int startNum;
    cout << " Enter the value of n: ";
    cin >> startNum;

    int nth_term = findAP(startNum);
    cout<< " value of " << startNum << "th term is: "<< nth_term<< endl; 
    return 0;
}