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
	string n;
	int i, t,k;
	
	cin>>t;
	while (t--){
		
	k=0;
    cin>>n;
    
    fr(i, n.size()){
    	if(n[i]=='4') k++;
    }
    cout <<k<<endl ;
    }
   return 0;
}