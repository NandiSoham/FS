//Question: Find Qunique element in arrray (code studio)

#include <iostream>
using namespace std;


int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i< size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int oddArr[7] = {2,3,6,1,6,2,3};
    int f_ans = findUnique(oddArr, 7);
    cout<< f_ans;

    return 0;
}