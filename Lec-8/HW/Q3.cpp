#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout<< " enter the amount:"<< endl;
    cin>> amount;
    int hundreds, fifties, twenties, ones;

    switch(1){
        case 1: hundreds = amount / 100;
            amount = amount % 100;
            cout << "Number of 100 rupees notes: " << hundreds << endl;
        
        case 2: fifties = amount / 50;
            amount = amount % 50;
            cout << "Number of 50 rupees notes: " << fifties << endl;

        case 3: twenties = amount / 20;
            amount = amount % 20;
            cout << "Number of 20 rupees notes: " << twenties << endl;

        case 4: ones = amount / 1;
            amount = amount % 1;
            cout << "Number of 1 rupees notes: " << ones << endl;
            break;
    }
    return 0;

}