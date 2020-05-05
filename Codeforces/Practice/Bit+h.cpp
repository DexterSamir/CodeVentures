#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define fr(i,n) for(i=0;i<n;i++)
#define fn(i,n) for(i=1;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)

int main()
{
	ll n, a=0, b, c, i;
	
    cin>>n;
    string x;
    while (n--){
    	cin>>x;
    	if(x[1]=='+'){
    		a++;
    		
    	}
    	else if(x[0]=='+'){
    		++a;
    		
    	}
    	else if(x[0]=='-'){
    		--a;
    	}
    	else if(x[1]=='-'){
    		a--;
    	}
    }
    cout<<a<<endl ;
   return 0;
}