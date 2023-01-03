#include <iostream> //file where cout code is written, we're importing that
using namespace std;

int main()
{
    cout << "hello" << endl; //'<<' used to print or write or display the output
                             // 'endl' helps the cursor to come to a new line, it's similar as '\n'
    int b = 2201;
    cout << b << endl;

    int size = sizeof(b);
    cout << "size of a is:" << size << endl;

    int a = 'a';
    cout << a << endl;

    char ch = 97;
    cout << ch << endl;

    char ch1 = 123456;
    cout << ch1 << endl;

    unsigned int c = -12;
    cout << c << endl;
}