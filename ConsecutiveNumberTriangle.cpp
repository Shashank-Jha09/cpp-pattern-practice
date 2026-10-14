#include<bits/stdc++.h>
using namespace std; 
void first(int n){  
    for (int i=1; i<=n; i++){
        //number
        for (int j=1; j<=i; j++){
            cout<<j; 
        }
        //space
        int space=2*(n-i); 
        for (int k=1; k<=space; k++){
            cout<<" "; 
        }
        //number
        for (int j=i;j>=1; j--){ 
            cout<<j;             
        }
        cout<<endl;
    }
}
int main(){ 
    int n; 
    cin>>n; 
    first(n); 
}