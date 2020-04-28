#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string s, r;
    
    cin>>s;
    
    r=s;
    
    reverse(s.begin(),s.end());
    if(s==r){
    	cout<<"YES"<<endl ;
    }
    else{
    	cout<<"NO"<<endl ;
    }
    
}