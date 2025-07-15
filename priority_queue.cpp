#include<bits/stdc++.h>

using namespace std;
// priority qeueue is a data structure where elements are processed based on priority
void explainPriorityQueue() {
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    cout << pq.top() << endl; // Access top element (8)
    pq.pop(); // Remove top element (8), queue becomes {5, 2}
    cout << pq.top() << endl; // Access new top element (5)

// also known as min heap:
    priority_queue<int , vector<int>, greater<int>> pq1;// stores minimum element at the top
    pq1.push(5); // {5}
    pq1.push(2); // {2, 5}
    pq1.push(8); // {2, 5, 8}
    cout << pq1.top() << endl; // Access top element (2)


}
int main() {
    explainPriorityQueue();
    return 0;
}


//push tc logn
//pop tc logn
//top tc O(1)