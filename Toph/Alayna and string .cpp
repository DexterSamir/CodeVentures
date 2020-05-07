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
   string s;
   cin>>s;
   ll i;
   int c=0,u=0;
   fr(i, s.size()){
   	if(s[i]>='A' && s[i]<='Z' ) c++;
   	else  if(s[i]>='a' && s[i]<='z' ) u++;
   }
	
    
    cout<<c<<sp<<u<<endl ;
    
    
   return 0;
}