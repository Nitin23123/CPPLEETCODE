#include<bits/stdc++.h>

using namespace std;
//queue is a first in first out (FIFO) data structure
void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);// {1, 2, 4}

    q.back() += 5;

    cout << q.back() << endl; // Access last element (9)    

    cout << q.front() << endl; // Access first element (1)
    q.pop(); // Remove first element (1), queue becomes {2, 9}
    cout << q.front() << endl; // Access new first element (2)
}


int main() {
    explainQueue();
    return 0;
}