#include <iostream>
using namespace std;

//finding first occurance or left most occurance
int leftMost(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;    //just initializing the variable, we'll use this to store the answer
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] > key){
            end  = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

//finding last occurance or right most occurance
int rightMost(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;    //just initializing the variable, we'll use this to store the answer
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end  = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout << "first occurance of 3 is at index: "<<leftMost(even,11,3)<< endl;
    cout << "last occurance of 3 is at index: "<<rightMost(even,11,3)<< endl;
}