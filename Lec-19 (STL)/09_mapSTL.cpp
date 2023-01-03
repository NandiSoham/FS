#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Portland"; // 1 -> key; Portland -> value
    m[2] = "State";
    m[3] = "University";

    // another way to insert values
    m.insert({4, "Oregon"});

    // printing
    cout << "before erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 4: " << m.count(4) << endl;

    // erase
    m.erase(3);
    cout << "after erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    //'find' operation
    cout<< "after executing find: " << endl;
    auto it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
}

// time complexity of 'insert', 'erase', 'find', 'count' operations is O(logn) in