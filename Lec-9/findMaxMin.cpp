#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int funcMax = INT_MIN;
    for(int i = 0; i<n ; i++){
        funcMax = max(funcMax, arr[i])  ;                  //using inbuild predefined function for max finding 
        // if (arr[i]> max){
        //     max = arr[i];
        // }
    }
    return funcMax;
}

int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i = 0; i<n ; i++){
        if (arr[i]< min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    cout<<"enter the no of elements in array: ";
    int size;
    cin>> size;
    int arr[100];
    
    cout<<"enter the elements in array: ";
    for(int i = 0; i< size; i++ ){
        cin>>arr[i];
    }

    cout<<"max value in array is: "<< getMax(arr, size)<< endl;
    cout<<"min value in array is: "<< getMin(arr, size)<< endl;

    return 0;
}