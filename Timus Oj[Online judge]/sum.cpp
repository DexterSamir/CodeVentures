#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a=1,n, sum=0;
     
    cin>>n;
    
    if(n<a) swap(a, n);
    for(int i=a;i<=n;i++) {
    	sum+=i;
    }
    
    cout <<sum<<endl ;
}