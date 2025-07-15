#include<bits/stdc++.h>

using namespace std;
//last in first out (LIFO) data structure
void explainStack() {
    stack<int> st;
    st.push(10); // {10}
    st.push(20); // {10, 20}
    st.emplace(30); // {10, 20, 30}

    cout<< st.top() << endl; // Access top element (30)
    st.pop(); // Remove top element (30), stack becomes {10, 20}
    
    cout << st.top() << endl; // Access new top element (20)
    cout << "Stack size: " << st.size() << endl; // Size of stack (2)
    cout << st.empty() << endl; // Check if stack is empty (0)

    stack<int> st1 , st2;
    st1.swap(st2); // Swap contents of two stacks

}
int main() {
    explainStack();
    return 0;
}