#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	int n, f=0;
	cin>>n;
	
	for(int i=1;i<n;i++){
		if(n%i==0) f++;
	}
	
	cout<<f;
    
    
}