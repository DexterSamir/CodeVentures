#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n,c=1;
    cin>>n;
    
    
    for(int i=2;i<n/2;i++){
    	if(n%i==0) c=0;
    }
    
    if(c){
    	cout<<"Yes";
    	}
    else
    	cout<<"No";
    
}