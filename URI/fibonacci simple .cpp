#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    cin>>n;
    int a=0, b=1, c;
    
    for(int i=1;i<=n;i++) {
        if(i==n) cout <<a<<endl ;
        else
    	cout <<a<<" ";
    	c=a+b;
    	a=b;
    	b=c;
    }
    
}