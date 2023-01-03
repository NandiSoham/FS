// Queue folows FIFO(First In First Out) approach

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    // pushing value or elements
    q.push("Portland");
    q.push("State");
    q.push("University");

    // printing the first element of the queue
    cout << "First element: " << q.front() << endl;
    cout << "Size before pop: " << q.size() << endl;

    // perform 'pop' operation thn print the first element.
    q.pop();
    cout << "After Poping out, First element: " << q.front() << endl;
    cout << "Size after pop: " << q.size() << endl;
}