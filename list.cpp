#include<bits/stdc++.h>

using namespace std;

void explainList(){
    list<int> ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.emplace_back(30);
    ls.push_front(5);
    ls.emplace_front(1);\
    cout << "List elements: ";
    for (const auto& elem : ls) {     
        cout << elem << " ";
    }
}
//rest functions same as vector begin, end, size, empty, front, back, pop_front, pop_back, insert, erase, clear


int main() {
    explainList();
    return 0;
}