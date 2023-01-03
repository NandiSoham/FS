#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = (n-1);

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int printArray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main(){

    int arr[6] = {2,4,7,9,5,3};
    int second_arr[5] = {9,6,-2,4,7};

    reverse(arr,6);
    reverse(second_arr, 5);

    printArray(arr, 6);
    printArray(second_arr, 5);
}