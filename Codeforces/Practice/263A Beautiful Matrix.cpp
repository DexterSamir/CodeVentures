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
	int n, a, b, c, i, j;
	int m[5][5];
    fr(i, 5){
    	fr(j,5){
    		cin>>m[i][j];
    			
    		if(m[i][j]!=0){
    			a=abs(i-2);
    			b=abs(j-2);
    			c=a+b;
    			cout<<c<<endl ;
    			break;
    		}
    	}
    }
    
   return 0;
}