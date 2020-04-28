#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    long prod=1;
    
    int n ;
    
    cin>>n;
    
    int a[2000];
    
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n;i++){
       if(a[i]!=0)
    	prod=(prod * a[i])%1000000007 ;
    }
    
    cout<<prod;
}