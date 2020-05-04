#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define z size()
int main()
{
	ll n, a, sum;
	cin>>n;
	
	while(n--){
		cin>>a;
		
		sum=0;
		while (a!=0){
		  sum +=(a%10);
		  a/=10;
		}
		cout<<sum<<endl;
	}
	
    
    
   return 0;
}