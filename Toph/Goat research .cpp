#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	int m=n, max=0, j=0;
	string g[m];
	while(n--){
	
     cin>>g[j]; 
    int a=0;
    for(int i=0;i<g[j].size();i++) {
    	if(g[j][i]=='a') a++;
    }
    if(a==1) g[j].push_back('a');
    else
    {
    	if(a%2!=0) g[j].pop_back();
    }
   
    if(g[j].size()>=max){
    	max = g[j].size(); 
    }
    j++;
    }
    
   
    for(int i=0;i<m;i++){
    	if(g[i].size()<max){
    		int len = max-g[i].size();
    		len/=2;
    		while(len--) cout<<" ";
   	     cout<<g[i]<<endl ;
    	}
    	else 
    	cout<<g[i]<<endl ;
    }
    
}