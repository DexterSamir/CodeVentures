#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a=0,g=0,d=0,n;
    
    while(cin>>n){
    	if(n==4) break;
    	
    	if(n>0 && n<=3){
    		if(n==1) a++;
    		if(n==2) g++;
    		if(n==3) d++;
    	}
    }
    
    cout<<"MUITO OBRIGADO"<<endl ;
    
    cout<<"Alcool: "<<a<<endl ;
    cout<<"Gasolina: "<<g<<endl ;
    cout <<"Diesel: "<<d<<endl ;
    
    
}