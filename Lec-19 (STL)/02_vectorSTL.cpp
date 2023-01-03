// it is a dynamic array.
//  as soon as capacity of the vector is full and we're trying to put more values, it will double its capacity on its own.
//  example: suppose the capacity of my array is 4 and now I want to put a 5th value, it'll double the capacity of the array tp double by itself
//  eplaination: it'll make another array of double size, then it'll copy the old values to the new array and thn it'll dump the old array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // initializing a vector. int = datatype; v = vector name
    //  'size' defines how many elements are there in the array
    //'Capacity' defines how many elements the array can hold.
    vector<int> v;
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;

    // now we'll push elements into the array using 'push_back'
    v.push_back(1);
    cout << "after putting 1 size is: " << v.size() << endl;
    cout << "after putting 1 capacity is: " << v.capacity() << endl;

    v.push_back(3);
    cout << "after putting 3 size is: " << v.size() << endl;
    cout << "after putting 3 capacity is: " << v.capacity() << endl;

    v.push_back(7);
    cout << "after putting 7 size is: " << v.size() << endl;
    cout << "after putting 7 capacity is: " << v.capacity() << endl;

    v.push_back(11);
    cout << "after putting 11 size is: " << v.size() << endl;
    cout << "after putting 11 capacity is: " << v.capacity() << endl;

    // random access to any index using 'at' operation
    cout << "element at index 2 is: " << v.at(2) << endl;

    // getting first and last element
    cout << "first element of the array is: " << v.front() << endl;
    cout << "last element of the array is: " << v.back() << endl;

    // we can use 'pop_back' operation to pop out element from the array
    // cout << "before pop the the array is: ";
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // v.pop_back();

    // cout << "after pop the the array is: ";
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // clearing or making empty the vector using 'clear' operation
    // after doing the 'clear' operation the size of the array becomes 0 but capacity remains the same.
    //  cout<<"size before clearing the array: "<<v.size()<<endl;
    //  v.clear();
    //  cout<<"size after clearing the array: "<<v.size()<<endl;

    //another representation of initializing vector
    //jodi age theke jene thaki koto size er vector banate hobe, the:
    vector <int> a(5, 1);
    //here 5 = size of the vector
    //1 = all the index are getting initialized with 1, if you dont specify it, it'll get initialized by 0 by default.
    cout<<"Print new vector a: ";
    for(int i : a){
        cout<< i << " ";
    }
    cout<<endl;

    //now I want to make a new vector where I want copy the elements of 'a'
    vector<int> new_vec(a);
    cout<<"Print new_vec: ";
    for(int i : new_vec){
        cout<< i << " ";
    }
    cout<<endl;

    return 0;
}