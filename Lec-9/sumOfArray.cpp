#include <iostream>
using namespace std;

int sumOfArr(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[100], size;
    cout << "enter the number of elements you want in array: ";
    cin >> size;

    cout<< "enter the values of array: ";
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }

    cout<<"sum of the elements present in the array: "<<sumOfArr(arr, size)<< endl;
}