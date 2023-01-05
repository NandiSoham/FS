#include <iostream>
using namespace std;

long long int sqrtInt(int n)
{
    int s = 0;
    int e = n;
    long long int m = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int sq = m * m;
        if (sq == n)
        {
            return m;
        }
        if (sq < n)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

double sqrtMorePrecise(int n, int precisionCount, int tempAns)
{ // precisionCount = koto gulo digit lagbe point er pore
    double factor = 1;
    double ans = tempAns;

    for (int i = 0; i < precisionCount; i++)
    {
        factor = factor / 10;
        // we did this step to get that '0.1', initially factor was 1, we devided by 10, so we're getting 0.1
        // to get 0.1, 0.01, 0.001 simultaneously in respected step
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    int tempAns = sqrtInt(n);
    cout << "Answer is: " << sqrtMorePrecise(n, 3, tempAns);

    return 0;
}