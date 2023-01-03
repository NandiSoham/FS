#include <iostream>
#include <array>
using namespace std;

int main()
{
    // initializing array:
    // int = datatype, 4 = size, a = array name
    array<int, 4> a = {
        1,
        2,
        3,
        4,
    };

    // to get the size of the array
    int size = a.size();
    cout << "size: " << size << endl;

    // to get the values of array
    for (int i = 0; i < size; i++)
    {
        cout <<"elements of the array are: "<< a[i] << " ";
        
    }
    cout<<endl;

    // using 'at' operation to get the value of any particular index
    cout << "element at index 2 is: " << a.at(2) << endl;

    // checking if the array is empty or not using 'empty' operation. It'll return boolean type, 0-> false, 1 -> true
    cout << "Empty:" << a.empty() << endl;

    // getting the first and last element of the array using 'front' and 'back' operation.
    cout << "first element:" << a.front() << endl;
    cout << "last element:" << a.back() << endl;
}