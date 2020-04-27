#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    
    
    int t;
    
    string s;
    
    cin>>t;
    
    while(t--){
    	cin>>s;
    	
    	
    	int b=0;
    	
    	for(int i=0;i<s.size();i++){
    		if(s[i]!='W'&&s[i]!='D' && s[i]!= 'N')
    		b++;
    	}
    	
    	
    	
    	
    	
    	if(b%6==0){
    		if(b/6>1){
    			cout<<b/6 <<" OVERS";
    		}
    		else if(b/6==1)
    		cout<<1<<" OVER";
    	}
    	else{
    		if(b%6>=1){
    			if(b<6)
    			cout<<b%6<<((b%6>1)?" BALLS":" BALL");
    			else{
    			cout<<b/6<<((b/6>1)?" OVERS ":" OVER ");
    			cout<<b%6<<((b%6>1)?" BALLS":" BALL");
    			}
    		}
    		
    	}
    	
    	if(b==0)cout<<"0 BALL";
    	
    	cout<<endl;
    }
}