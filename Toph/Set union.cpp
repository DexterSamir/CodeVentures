#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a[102],b[102], c[204];
    int m, n, k, j=0;
    
    cin>>m>>n;
    k=m+n;
    for(int i=0;i<m;i++) {
    	cin>>a[i];
    	c[j++]=a[i];
    }
    for(int i=0;i<n;i++) {
    	cin>>b[i];
    	c[j++]=b[i];
    }
    
    sort(c, c+k);
    
    for(int i=0;i<k;i++) {
    	if(c[i]!=c[i+1]){
    	if(i==k-1)	cout<<c[i]<<endl ;
        else
    	cout <<c[i]<<" ";
    	
    	}
    }
    
    
}