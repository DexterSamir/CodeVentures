#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    long long s, r,t, a[1000003];
    cin>>s>>r;
    t=r-1;
    for(int i=0;i<s;i++) {
    	cin>>a[i];
    }
    
    if(r==s)  cout<<a[0]<<" "<<a[t]<<endl ;
    else
    {
    	if(r>s) {
    		
    	t= r%s;
    	t--;
    	}
     cout<<a[t+1]<<" "<<a[t]<<endl ;
    }
}