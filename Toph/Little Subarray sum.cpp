#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	int n, a, b, sum=0;
	int num[102];
	cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		cin>>num[i];
		
		if(i>=a && i<=b) sum+=num[i];
	}
	
	cout<<sum;
}