#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	string a, b;
	int m=1;
	cin>>a>>b;
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i]) m=0; 
	}
	
	
	if(m) cout<<"Yes";
	else cout<<"No";
    
    
}