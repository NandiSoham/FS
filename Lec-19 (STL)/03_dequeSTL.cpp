// deque = doubly ended queue -> push, pop, insertion,deletion all operations are possible in both start and finish end.
//       - in deque there are multiple fixed static arrays, which keeps tracking that in which array the data is.
//       - in vector and array there was contiguous memory location to store data.
//       - dynamic
//       - random access possible using 'at' operation.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // inserting value-> I'm putting the first value later
    d.push_back(1);  // putting other value(s) of deque using 'push_back'
    d.push_front(2); // pushing first value using 'push_front'.
    d.push_back(4);

    cout << "elements of deque are: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // printing the value present at any particular index.
    cout << "Element present in 1st index is: " << d.at(1) << endl;

    // printing the front ansd bacl element
    cout << "front element is: " << d.front() << endl;
    cout << "back element is: " << d.back() << endl;

    // poping out from back
    // d.pop_back();
    cout << "after popping from back, elements are: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // poping out from front
    // d.pop_front();
    cout << "after popping from front, elements are: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // checking if it's empty or not using 'empty' opration.
    // cout << "Empty: " << d.empty() << endl;

    // delete using 'erase' opertion
    cout << "Size before erasing: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // within the bracets we have to give the details. example: if anyone wanna erase first element, we can write using'.begin' operation. We can specify the range of the value elements.
    cout << "Size before after erasing: " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}