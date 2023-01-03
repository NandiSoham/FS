#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int startIndex = 0;
    int endIndex = size - 1;
    int mid = (startIndex + endIndex) / 2;

    while(startIndex <= endIndex ){
        if (arr[mid]  == key){
            return mid;
        }
        //going to right part
        if(key > arr[mid]){
            startIndex = mid + 1;
        }
        //going to left side
        else{
            endIndex = mid - 1;
        }
        //updating mid
        mid = (startIndex + endIndex) / 2;
    }
    return -1;
}

int main(){
    int arr[6] = {2,4,6,8,12,18};
    int oddArr[5] = {3,8,11,14,16};

    int index = binarySearch(arr, 6, 20);
    cout << "index of the element is: "<< index<< endl;

    return 0;
}