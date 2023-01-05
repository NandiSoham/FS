#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    int arr[7] = {3, 5, 7, 15, 27, 98, 45};
    int search;
    int val;

    cout << "enter the element: ";
    cin >> search;

    for (int i = 0; i < 7; i++)
    {
        if (search == arr[i])
        {
            cout << "element found" << endl;
            val = arr[i];
            cout << "the value is: " << val << endl;
            break;
        }
        else
        {
            cout << "element not found";
        }
    }
}