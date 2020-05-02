#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int e=0,h=0,a=0,x=0,m=0;
    int n;
    string s;
    char c;
    
    cin>>n;
    
    while (n--){
    	cin>>s>>c;
    	
    	if(c=='A') a++;
    	else if(c=='E') e++;
    	else if(c=='H') h++;
    	else if(c=='M') m++;
    	else if(c=='X') x++;
    }
    
    cout<< x<<" Hobbit(s)"<<endl ;
    cout<<h <<" Humano(s)"<<endl ;
    cout<<e <<" Elfo(s)"<<endl ;
    cout<< a<<" Anao(s)"<<endl ;
    cout<<m <<" Mago(s)"<<endl ;
    
}