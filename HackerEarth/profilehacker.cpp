#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	int l;
	cin>>l;
	
	int t;
    cin>>t;
    
    int w,h;
    
    for(int i=0;i<t;i++)
    {
    	cin>>w>>h;
    	
    	if(w<l || h<l){
    		cout<<"UPLOAD ANOTHER"<<endl;
    	}
    	
    	if(w>=l && h>=l) {
    		if(w== h){
    			cout<<"ACCEPTED"<<endl;
    		}
    		else{
    			cout<<"CROP IT"<<endl;
    		}
    	}
    }
}