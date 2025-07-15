#include <bits/stdc++.h>

using namespace std;

void explainIterator()
{
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>::iterator it = v.begin();
    // it points to the memory address of the first element
    it++;
    cout << *(it) << endl; //* basically dereferences the iterator to get the value at that address

    vector<int>::iterator it2 = v.end(); // it2 points to the memory address just after the last element
    // it2 is not pointing to any element, it points to the memory address just after
    it2--;
    // it2 points to the memory address of the last element
    cout << *(it2) << endl; //* basically dereferences the iterator to get the value at that address

    cout << v[0] << " " << v.at(0) << endl;       // both give the first element of the vector
    cout << v[4] << " " << v.at(4) << endl;       // both give the last element of the vector
    cout << v.front() << " " << v.back() << endl; // front gives the first element, back gives the last element

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    { // iterating from the first element to the last element
        // it points to the memory address of the first element
        cout << *it << " "; // dereferencing the iterator to get the value at that address
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {                       // using auto to let the compiler deduce the type
        cout << *it << " "; // dereferencing the iterator to get the value at that address
    }
    cout << endl;

    for (auto it : v)
    {                      // range based for loop, it is a reference to the element
        cout << it << " "; // it is a reference to the element, so we can modify it
    }

    cout << endl;
    v.erase(v.begin() + 2);                // erasing the element at index 2
    v.erase(v.begin() + 1, v.begin() + 4); // erasing the elements from index 1 to index 4 (exclusive)
    for (auto it : v)
    {                      // range based for loop, it is a reference to the element
        cout << it << " "; // it is a reference to the element, so we can modify it
    }

    cout << endl;
    v.insert(v.begin() + 1, 10);    // inserting 10 at index 1
    v.insert(v.begin() + 2, 20);    // inserting 20 at index 2
    v.insert(v.begin() + 1, 2, 10); // inserting 10 at index 1, 2 times
    vector<int> copy = {100, 200, 300};
    v.insert(v.begin(), copy.begin(), copy.end()); // inserting the elements of copy vector at index 1

    for (auto it : v)
    {                      // range based for loop, it is a reference to the element
        cout << it << " "; // it is a reference to the element, so we can modify it
    }

    cout << endl;
    cout << "Size: " << v.size() << endl;                // size of the vector
    v.pop_back();                                        // removes the last element
    cout << "Size after pop_back: " << v.size() << endl; // size
    copy.swap(v);                                        // swaps the elements of copy and v
    cout << "Size after swap: " << v.size() << endl;     // size of
    v.clear();                                           // clears the vector, removes all elements
    cout << v.empty() << endl;                           // checks if the vector is empty, returns true if empty, false otherwise
}

int main()
{
    explainIterator();
    return 0;
}