#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    double n;
	double s=0, i=0; 
	
    while(cin>>n){
    	
    	if(n>=0 && n<=10) {
    		i++;
    		s+= n;
    		if(i==2) break;
    		
    	}
    	else{
    		cout<<"nota invalida"<<endl ;
    	} 
    }
    cout<<"media = "fixed <<setprecision (2)<< s/2<<endl ;
    
}