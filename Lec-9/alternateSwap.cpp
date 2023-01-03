#include <iostream>
using namespace std;

void alterSwap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
            //instead of inbuild 'swap' how can we swap?
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int oddArr[5] = {3, 6, 9, 2, 5};
    int evenArr[6] = {4, 8, 2, 13, 7, 32};

    alterSwap(oddArr, 5);
    printArray(oddArr,5);

    alterSwap(evenArr, 6);
    printArray(evenArr,6);

    return 0;
}