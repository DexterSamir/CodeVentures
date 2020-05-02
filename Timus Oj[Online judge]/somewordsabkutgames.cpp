#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    cin>>n;
    
    int a, t=n;
    
    set<int> b;
    while(t--){
    	for(int i=0;i<n;i++) {
    	cin>>a;
    	b.insert(a);
    	}
    }
    
    for(auto i: b){
    	if(i== *--b.end()) cout<<i<<endl ;
    	else
    	cout<<i<<" ";
    }
    
   
   
}