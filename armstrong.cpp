#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int copy=n;
    int original = n; 
    int count =0;
    while(original>0){
        count++;
        original=original/10; // Count the number of digits
    }
    int digit = 0;
    while(n>0){
        int last = n%10;
        digit = digit+ pow(last,count);
        n /= 10;
    }
    if(copy==digit){
        cout << "The number is an Armstrong number." << endl;
        return 1 ;
    }
    else{
        cout << "The number is not an Armstrong number." << endl;
    }
}
int main(){
    int n;
    cout << "tell me the number:";
    cin>> n;
    armstrong(n);
}