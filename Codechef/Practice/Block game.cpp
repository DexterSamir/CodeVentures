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
	int n; cin>>n;
	
	while(n--){
	string s, r;
	
	cin>>s;
	r=s;
	reverse (s.begin (), s.end ());
	
	cout<<((s==r)? "wins": "losses")<<endl ;
     }
    
   return 0;
}