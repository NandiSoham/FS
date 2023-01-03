#include <iostream>
using namespace std;

// -------------Approach_1-----------------
// int power(int a, int b){
//     int ans = 1;
//     for(int i =1; i <= b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main()
// {
//     int a,b;
//     cin >> a >> b;
    
//     int final_ans = power(a,b);
//     cout << "answer is:"<< final_ans<< endl;
//     return 0;


// }
// ----------------APPROACH_2(efficient)-------------------

int power(){
    int a, b;
    cin >> a >> b;
    int ans = 1;

    for(int i = 1; i<= b;i++){
        ans = ans*a;
    }
    return ans;
}

int main (){
    int final_ans = power();

    cout<<"The answer is:"<< final_ans << endl;
    return 0;
}