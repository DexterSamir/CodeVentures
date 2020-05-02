#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n; cin>>n;
    int in=0,out=0,a;
    while(n--){
    	cin>>a;
    	
    	if(a>=10 && a<=20) in++;
    	else out++;
    }
    
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}