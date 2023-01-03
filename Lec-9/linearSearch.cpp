#include<iostream>
using namespace std;

bool search(int arr[], int size, int element){
    for(int i = 0; i< size; i++){
        if(arr[i] == element){
            return 1;   // it means true
        }
        }
        return 0;
    }



int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout<<"Enter the element: ";
    int element;
    cin>> element;

    bool found = search(arr, 10, element);
    if (found){
        cout<<"element is present"<< endl;
    }
    else{
        cout<<"element is not present"<< endl;
    }

    return 0;
}