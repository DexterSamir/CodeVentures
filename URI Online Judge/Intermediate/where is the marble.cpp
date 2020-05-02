#include <bits/stdc++.h>
using namespace std;
#define pb push_back
//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	
	int t=1;
    while (cin>>a>>b){
    	if(!a ||!b) break ;
    	cout<<"CASE# "<<t<<":"<<endl ;
    	vector <int > v, v2;
    	int m;
    	for(int i=0;i<a;i++){
    		cin>>m;
    		v.pb(m);
    	}
    	sort(v.begin(),v.end());
    	for(int i=0;i<b;i++) {
    		cin>>m;
    		v2.pb(m);
    	}
    	vector <int>:: iterator  it2;
    	
    	for(auto it:v2){
    	
    		it2 = find (v.begin(),v.end(), it);
    	
    	if(it2!=v.end()){
    		cout<<it<<" found at "<<(it2-v.begin())+1<<endl ;
    	}
    	else{
    		cout<<it<<" not found"<<endl ;
    	}
    	   
    	
    	}
    	
    	t++;
    }
    
    
}