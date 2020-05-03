#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n[10], mx, an;
int main()
{
    string s; cin>>s;
	ll l=s.size();
    
    for(ll i=0; i<l; i++)
    {
        n[s[i]-'0']++;
    }
    for(ll i=0; i<=9; i++)
    {
        if(n[i]>mx) {
          mx=n[i];
          an=i;
        }
    }
    
    cout<<an<<endl;
    
    return 0;
}