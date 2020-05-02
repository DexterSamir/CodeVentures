#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    string a, b, c;
    cin>>a>>b>>c;
    
    if(a.at(0)=='v') {
    	if(b.at(1)=='v'){
    		if(c.at(0)=='c') cout<<"aguia"<<endl ;
    		else if(c.at(0)=='o') cout<<"pomba"<<endl ;
    	}
    	else if(b.at(1)=='a'){
    		if(c.at(0)=='o')cout <<"homem"<<endl ;
    		else if(c.at(0)=='h') cout<<"vaca"<<endl;
    	}
    }
    else if(a.at(0)=='i') {
    	if(b.at(0)=='i'){
    		if(c.at(2)=='m') cout<<"pulga"<<endl ;
    		else if(c.at(2)=='r') cout<<"lagarta"<<endl ;
    	}
    	else if(b.at(0)=='a'){
    		if(c.at(0)=='o')cout <<"minhoca"<<endl ;
    		else if(c.at(0)=='h') cout<<"sanguessuga"<<endl;
    	}
    }
    
   
    
}