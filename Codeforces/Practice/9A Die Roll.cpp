#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int a,b,k;
  
  cin>>a>>b;
  a=7-max(a,b);
  b=6;
  
  k=__gcd(a,b);
  
  a/=k,b/=k;
  
  cout<<a<<"/"<<b<<endl;
}