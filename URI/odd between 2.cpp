#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a,n, b, s=0;
    cin>>n;
    while(n--){
    s=0;	
    cin>>a>>b;
    if (a==b) {
    	cout<<0<<endl;
    	continue;
    }
    if(b<a) swap(a, b);
    
    for(int i=a+1;i<b;i++){
    	if(i%2==1 || i%2==-1) s+=i;
    }
    
    cout<<s<<endl;
    }
    
}
