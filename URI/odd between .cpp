#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b, s=0;
    cin>>a>>b;
    if (a==b) {
    	cout<<0<<endl;
    	return 0;
    }
    if(b<a) swap(a, b);
    
  
    
    for(int i=a+1;i<b;i++){
    	if(i%2==1 || i%2==-1) s+=i;
    }
    
    cout<<s<<endl;
    
}
