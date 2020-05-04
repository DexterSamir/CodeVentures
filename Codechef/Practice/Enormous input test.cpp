#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    long long n,m, k, t=0;
    
    cin>>n>>k;
    
    while(n--){
    	cin >>m;
    	
    	if(m%k==0) t++;
    }
    
    cout<<t<<endl ;
    
    
}