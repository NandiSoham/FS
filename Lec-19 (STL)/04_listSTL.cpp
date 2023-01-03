// using double link list this list STL is introduced
// direct access using 'at' operation or other way is not possible. To get the element we've to traverse to that index only then we can access that particular element.
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    // copying the existing list into new another list.
    // list<int> l_new(l);   -> the problem is, now there is no value in 'l', so after copying 'l_new' also be empty.
    // we can do one thing, let's take 5 elements and initialize them with 100. So in output we'll get like {100, 100, 100, 100, 100}
    list<int> l_new(5, 100);
    cout << "elements of l_new: ";
    for (int i : l_new)
    {
        cout<< i << " ";
    }
    cout << endl;

    // putting values into list
    l.push_back(1);
    l.push_front(4);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // erase
    cout << "Size before erasing: " << l.size() << endl;
    l.erase(l.begin()); // within the bracets we have to give the details. example: if anyone wanna erase first element, we can write using'.begin' operation. We can specify the range of the value elements.
    for (int i : l)
    {
        cout << "elements are:" << i << " ";
    }
    cout << endl;
    cout << "Size before after erasing: " << l.size() << endl;

    // we can also perform pop_front, pop_back,'.size' etc operations.

}
