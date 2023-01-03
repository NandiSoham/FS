#include <iostream>
using namespace std;

int findFact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        return factorial;
    }
}

int nCr(int n, int r)
{
    int numerator = findFact(n);
    int denominator = findFact(r) * findFact(n - r);
    int ans = numerator / denominator;
    return ans;
}

int main()
{
    int n, r;
    cout << "enter the value of n:" << endl;
    cin >> n;

    cout << "enter the value of r" << endl;
    cin >> r;

    cout << "the value of"
         << " " << n << "C" << r << " "
         << "is:" << nCr(n, r) << endl;
}