#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(12);
    v.push_back(37);
    v.push_back(44);
    v.push_back(9);

    cout << "Finding 37: " << binary_search(v.begin(), v.end(), 37) << endl;

    // lower bound
    cout << "lower bound: " << lower_bound(v.begin(), v.end(), 37) - v.begin() << endl;

    // upper bound
    cout << "lower bound: " << upper_bound(v.begin(), v.end(), 44) - v.begin() << endl;

    int a = 35;
    int b = 87;

    // find min and max
    cout << "max: " << max(a, b) << endl;
    cout << "min: " << min(a, b) << endl;

    // swap
    swap(a, b);
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;

    string str = "aa11bb22cc33";

    // reverse
    reverse(str.begin(), str.end());
    cout << "after reverse: " << str << endl;

    // rotate
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "after rotate: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sorting
    sort(v.begin(), v.end());
    cout << "after sorting: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}