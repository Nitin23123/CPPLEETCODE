#include<bits/stdc++.h>

using namespace std;
void explainDeque() {
    deque<int> dq;
    dq.push_back(10);//{10}
    dq.push_back(20);//{10, 20}
    dq.emplace_back(30);//{10, 20, 30}
    dq.push_front(5);//{5, 10, 20, 30}
    dq.emplace_front(1);//{1, 5, 10, 20, 30}

    dq.pop_back();//{1, 5, 10, 20}
    dq.pop_front();//{5, 10, 20}

    cout << "Deque elements: ";
    for (const auto& elem : dq) {
        cout << elem << " ";
    }
}


int main() {
    explainDeque();
    return 0;
}