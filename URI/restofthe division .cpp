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
    
    for(int i=a+1;i<b;i++) {
    	if(i%5==2 || i%5==3){
    		cout<<i<<endl ;
    	}
    }
    
   
}