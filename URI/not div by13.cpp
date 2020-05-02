#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b, sum=0;
    
    cin>>a>>b;
    if(b<a) swap(a, b);
    
    for(int i=a;i<=b;i++) {
    	if(i%13!=0){
    		sum+=i;
    	}
    }
    
    cout <<sum<<endl ;
}