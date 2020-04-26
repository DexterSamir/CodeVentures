#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n; cin>>n;
    vector <int> a;
    
    for(int i=0;i<n;i++){
    	int b;
    	cin>>b;
    	a.push_back(b);
    	
    }
    
    for(int it=n-1; it>=0;it--){
    	cout<<a[it]<<" ";
    }
}