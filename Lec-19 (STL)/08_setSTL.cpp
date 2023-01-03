// all the elements of set should be unique. For example if we pu 5 twice it'll take once only
// behind the scene it's implementeation is done using BST, so if we've put any value it can't be modified. either add another data or delete the data.
// if we fetch the elements, it'll return in sorted order.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // putting values and printing them
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(21);
    s.insert(7);
    s.insert(69);
    s.insert(17);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // performing erase
    s.erase(s.begin()); // this way we can erase the first element
    // except first element if we want to erase any other element, we've to follow the below process
    set<int>::iterator it = s.begin();
    it++;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    //'count' operation will tell if the particular element is present or not in the set.
    // this will return boolean type output. 0 -> false, 1 -> true
    cout << "7 is present or not: " << s.count(7) << endl;

    //'find' function: if the given element is there in the set then it'll return the itrator of that particular element.
    
}