#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a,b,c,t;
    
    int max=INT_MIN; 
    
    cin>>t;
    
    while(t--){
    	
    cin>>a>>b>>c;
    
    
    if(a>b){
    	if(a>c)
        {
    		if(b+c>=a)
    		{
    			cout<<"Yes"<<endl;
    			break;
    		}
    		else
    		{ 
    			cout<<"No"<<endl;
    			break;
    		}
    	}
    	else
    	{
    		if(a+b>=c)
    		{
    			
    			cout<<"Yes"<<endl;
    			break;
    		}
    		else
    		{
    			
    			cout<<"No"<<endl;
    			break;
    		}
    	}
    }
    else{
    	if(b>c)
    	{
    	  if(a+c>=b){
      	 cout<<"Yes"<<endl;
      	 break;
      	}
      	else
      	  cout<<"No"<<endl;
      	  break;
    	}
    	else
    	{
    		if(a+b>=c){
    			cout<<"Yes"<<endl;
    			break;
    		}
    		else
    		{
    			cout<<"No"<<endl;
    			break;
    		}
    	}
    }
    }
    
}