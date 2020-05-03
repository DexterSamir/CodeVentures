#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    long long n, m=0;
    
    cin>>n;
    
    for(int i=1;i<=n;i++) {
    		m+= i*i;
    }
    
    cout<<m<<endl ;
}