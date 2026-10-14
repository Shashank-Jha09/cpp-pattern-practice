#include<bits/stdc++.h>
using namespace std; 
void first(int n){
    for (int i=1; i<=n; i++){ 
        for (int j=1; j<=i; j++){ 
            cout<<"*"; 
        }
        cout<<endl; 
    }
}
void second(int n){
    for (int i=1; i<=n-1; i++){
        for (int j=1; j<=n-i; j++){ 
            cout<<"*"; 
        }
        cout<<endl;
    }
}
int main(){
    int n; 
    cin>>n; 
    first(n); 
    second(n); 
}