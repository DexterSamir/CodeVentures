#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b;
    
    while(cin>>a>>b){
    	if(a==0||b==0||a==-1||b==-1) break;
    	int sum=0;
    	if (b<a)swap (a, b);
    	for(int i=a;i<=b;i++) {
    		cout<<i<<" ";
    		sum+=i;
    	}
    	cout<<"Sum="<<sum<<endl ;
    }
    
    
}