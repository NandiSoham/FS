// in this kind of queue the first element will be the greatest. So, by default priority queue is related to max heap.
// after pushing the elements into priority queue, if we construct max heap, then while extracting data it'll return greatest element and if we construct a min heap , while fetching the data it'll throw lowest data.
#include <iostream>
#include <queue>
using namespace std;

int main()
{                             // max-heap
    priority_queue<int> maxp; // when we initialize priority queue, it based on max heap, that's why if you fetch element from this, it'll return the greatest value present in the queue

    // putting values in max-heap
    maxp.push(4);
    maxp.push(0);
    maxp.push(35);
    maxp.push(12);

    // printing or fetching the data from priority queue
    int n = maxp.size();
    cout<<"elements of max-heap are: ";
    for (int i = 0; i < n; i++)
    {
        cout << maxp.top() << " ";
        maxp.pop();
    }
    cout << endl;

    // min-heap
    priority_queue<int, vector<int>, greater<int>> minp;

    // putting values in max-heap
    minp.push(4);
    minp.push(0);
    minp.push(35);
    minp.push(12);

    // printing or fetching the data from priority queue
    int x = minp.size();
    cout<<"elements of min-heap are: ";
    for (int i = 0; i < x; i++)
    {
        cout << minp.top() << " ";
        minp.pop();
    }
    cout << endl;
}