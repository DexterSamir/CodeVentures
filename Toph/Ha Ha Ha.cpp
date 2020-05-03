#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double n, a, b, c;
    
    cin>>n;
    
    for(int i=1;i<=n;i++) {
    	 cin>>a>>b;
    	 c= sqrt(a*a+b*b);
    	 
    	 cout<<"Case "<<i<<": "<<c*c<<endl ;
    }
    
    
}