#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    cout<< "printing array:"<<endl;
    for(int i = 0; i<size; i++){
        cout<< arr[i]<<" ";
    }
    cout<<"Printing DONE"<<endl;
}

int main(){
    int number[15];
    cout<< "value at index 0:"<<number[0]<< endl;
    // cout<< "value at index 20:"<<number[30]<< endl;

    int second[15] = {2,7};
    int n = 15;
    printArray(second,15);

    // cout<<endl<<"all good"<<endl;

    int secondSize = sizeof(second)/sizeof(int);
    cout<<"size of array 'second' is :"<< secondSize<<endl;


    return 0;
}