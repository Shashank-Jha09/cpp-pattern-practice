#include<bits/stdc++.h>
using namespace std; 
void pyr(int n){
    for (int i=1; i<=n; i++){ 
        for (int sp=1;sp<=n-i; sp++ ){ 
            cout<<" ";
        }
        for (int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void inpyr(int n){
    for (int i=1; i<=n; i++){
        for (int sp=1; sp<=i-1; sp++){
            cout<<" "; 
        }
        for (int j=1; j<=2*(n-i)+1; j++){ 
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){ 
    int n; 
    cin>>n; 
    pyr(n);
    inpyr(n); 
}