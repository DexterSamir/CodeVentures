#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b;
    
    while (cin>>a>>b){
    	if(a==0||b==0){
    		break;
    	}
    	
    	if(a>0 && b>0){
    		cout <<"primeiro"<<endl ;
    	}
    	if(a<0 && b>0){
    		cout <<"segundo"<<endl ;
    	}
    	if(a>0 && b<0){
    		cout <<"quarto"<<endl ;
    	}
    	if(a<0 && b<0){
    		cout <<"terceiro"<<endl ;
    	}
    	
    }
    
    
}