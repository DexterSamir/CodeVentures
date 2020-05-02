#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    double m,b,t=0;
    cin>>n;
    
    while (n--){
    	
    	
    	cin>>m>>b;
    	
    	if(m==1001){
    		t+=(b*1.50);
    	}
    	if(m==1002){
    		t+=(b*2.50);
    	}
    	if(m==1003){
    		t+=(b*3.50);
    	}
    	if(m==1004){
    		t+=(b*4.50);
    	}
    	if(m==1005){
    		t+=(b*5.50);
    	}
    	
    	
    }
    
    cout<<fixed <<setprecision (2)<<t<<endl ;
}