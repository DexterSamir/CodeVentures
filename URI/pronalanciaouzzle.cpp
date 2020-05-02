#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    long long n;
    
    cin>>n;
    
    while(n!=0){
    	int a=n%10;
    	cout<<a;
    	n/=10;
    }
    cout<<endl ;
    
    
}