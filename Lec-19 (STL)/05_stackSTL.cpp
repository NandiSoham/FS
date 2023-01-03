// STACK follows LIFO(Last In First Out) concept,
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    // putting elements
    s.push("Portland");
    s.push("State");
    s.push("University");

    // printing the top element
    cout << "Top element: " << s.top() << endl;

    //pop operation
    s.pop();    // this step will pop out 'University' because it got enter last so it'll get out first (LIFO concept).
    cout << "Top element: " << s.top() << endl;     // instead of 'University', now 'State' is the top element after doing 'pop' operation.

    //checking size of stack
    cout<<"size of stack: "<<s.size()<<endl;

    //checking if the stack is empty or not
    cout<< "Empty: "<< s.empty()<< endl;
}