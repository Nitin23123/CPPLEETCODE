#include<iostream>

using namespace std;

int i, j;
void star(int n){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"*";
        }
    cout<<"\n";
    }
}
void star1(int n){
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
    cout<<"\n";
    }
}
void numpattern(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j <<" ";
        }
    cout<<"\n";
    }
}
void numpatten1(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i <<" ";
        }
    cout<<"\n";
    }
}
void pattern(int n){
    for(i=1;i<=n;i++){
        for(j=0;j<n-i+1;j++){
            cout<<"* ";
        }
    cout<<endl;
    }
}
void pattern1(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
    cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";        
        }
        //star
        for(int j=0;j< 2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";        
        }
        cout<<endl;        
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<i;j++){
            cout<<" ";        
        }
        //star
        for(int j=0;j< 2*n-1-2*i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";        
        }
        cout<<endl;        
    }
}
void pattern4(int n){
    for (int i=1; i< 2*n-1 ;i++ ){
        int stars=i;
        if(i > n) stars=2*n-i;
        for (int j=1 ; j<=stars ; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void pattern5(int n){
    for(i=0; i<n ; i++){
        for(j=0;j<=i;j++){
            if((i+j)%2==0) cout<<"1";
            else cout<<"0";
        }
    cout<<endl;
    }
}

void pattern6(int n){
    int space = 2*(n-1);
    for(int i =1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout << j;
        }
        //space
        for(int j =1;j<=space;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout<<endl;
        space -= 2;
    }
}

void pattern7(int n ){
    int num=1;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<num<<" ";
            num+=1;
        }
    cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<='A'+ i ;ch++){
            cout<< ch << " ";
        }
        cout<< endl;    
    }
}

void pattern9(int n){
    for (int i=0;i<n ; i++){
        for(char ch = 'A' ; ch<= 'A'+ (n-i-1); ch++){
            cout<< ch << " ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0 ; j<=i ; j++){
            cout<< ch << " ";
        }
        cout<< endl;    
    }
}

void pattern11(int n){
    
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";        
        }
        //star
        char ch= 'A';
        int breakpont = (2*i+1)/2;
        for(int j=1;j<=(2*i)+1;j++){
            cout<<ch;
            if(j<=breakpont) ch++;
            else ch--;
            
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";        
        }
        cout<<endl;        
    }
}

void pattern12(int n){
    for(int i =0; i< n ; i++){
        for(char ch='E'- i ; ch<= 'E' ; ch++){
            cout<<ch;
        }
    cout << endl;
    }
}

void pattern13(int n){
    int initS= 0;
    for (int i=0 ; i<n; i++){
       
        //star
        for(int j =1; j<=n-i;j++){
            cout<< "*";
        }
        //space
        for(int j=0 ; j<initS ; j++){
            cout<<" ";
        }
        //star
        for(int j =1; j<=n-i;j++){
            cout<< "*";
        }
        cout << endl;
        initS+=2;
    }
    initS=8;
    for(int i=1 ; i<=n;i++  ){
        //star
        for(int j =1; j<=i;j++){
            cout<< "*";
        }
        //space
        for(int j=0 ; j<initS ; j++){
            cout<<" ";
        }
        //star
        for(int j =1; j<= i;j++){
            cout<< "*";
        }
        cout << endl;
        initS-=2;
    }
}
int main(){
    int n;
    cin>> n;
//  star(n);
// star1(n);
//numpattern(n);
// numpatten1(n);
   // pattern(n);
  // pattern1(n);
   // pattern2(n);
   // pattern3(n);
   // pattern4(n);
   // pattern5(n);
    //pattern6(n);
   // pattern7(n);
   //pattern8(n);
    //pattern9(n);
    //pattern10(n);
   // pattern11(n);
  // pattern12(n);
    pattern13(n);
 }