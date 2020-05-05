#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define fr(i,n) for(i=1;i<n;i++)
#define fn(i,n) for(i=1;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)

int main()
{
	string s;
	int a=0,n, i;
	cin>>n>>s;
	
	fr(i,n){
		if(s[i]==s[i-1]){
			a++;
		}
	}
    cout<<a<<endl ;
   return 0;
}