#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string

int main()
{
	ll n, a, b, c;
	s num;
	cin>>n;
	while(n--){
		cin>>num;
		int l = num.size();
		a=num[0]-48;
		b=num[l-1]-48;
		cout<<a+b<<endl ;
	}
    
    
   return 0;
}