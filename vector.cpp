#include<bits/stdc++.h>

using namespace std;

void explainVector() {
    vector<int> v ;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v[1] << endl;
    
    vector<pair<int, int>>vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);
    cout << vec[0].first << " " << vec[1].first << endl;

    // Initializing a vector with particalur size and value
    vector<int> v2(5, 100); 
    //so basically we have a vector of size 5 with all elements initialized to 100 like this
    // v = {100, 100, 100, 100, 100}
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    vector<int> v3(5); // vector of size 5 with all elements initialized to 0
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }  
    cout << endl;\
    vector<int> v4(5,20);
    vector<int> v5(v4); // copy constructor
    for (int i = 0; i < v5.size(); i++) {
        cout << v5[i] << " ";
    }
    cout << endl;
}

int main() {
    explainVector();
    return 0;
}