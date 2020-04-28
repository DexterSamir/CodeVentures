#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t, p=0, g=0,pp,gp,s,fs[20],ts[20];
    int  ans;
    cin>>t;
    
    
    
    
    while(t--){
    	cin>>gp>>pp;
        if(pp<gp) swap(gp, pp);
    	
    	cin>>s;
    	 
    	 p=0; g=0;
    	
    	
    	for(int i=0;i<s;i++)
    	{
    		cin>>fs[i]>>ts[i];
    		
    		if(fs[i])
    		g++;
    		if(ts[i])
    		p++;
    		
    		
    	}
    	
    	if(p<=g){
    		ans = p*pp + g*gp;
    	}
    	else{
    		ans = p*gp + g*pp;
    	}
    	
    	cout<<ans<<endl;
    }
}