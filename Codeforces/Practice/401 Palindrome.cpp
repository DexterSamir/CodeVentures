#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define em emplace_back
#define mp make_pair
#define sp " "
#define cs "Case "
#define fi first
#define sn second 

/* STL */
#define mem(a,n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define alr(x) x.rbegin(),x.rend()
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxi(v) distance(v.begin(),max_element(v.begin(),v.end()))
#define mxa(a) *max_element(a, a.size())
#define r(a)   reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n) i=1;i<=(n);i++)
#define fa(i,a,n) for(long long  i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";         
map<char,char>m;
bool pal(string s){
  string a=s;
  r(a);
  return s==a;
}
bool mir(string s){
  auto i=s.begin();
  auto j=s.rbegin();
  auto k= s.begin()+(sz(s)+1)/2;
  for(;i<k;i++,j++){
    if(!m.count(*i) or m[*i] != *j) 
      return false;
  }
  
  return true;
}
int main()
{
  
   Ezio
   ll n;
   string s;
   
   string ma = "AEHIJLMOSTUVWXYZ12358";
   string mb = "A3HILJMO2TUVWXY51SEZ8";
                   
   fr(i,sz(ma)) m[ma[i]]=mb[i];  
   
          
   while(cin>>s){
     cout<<s<<" -- ";
     if(pal(s)){
       cout<<(mir(s)?"is a mirrored palindrome.":"is a regular palindrome.")<<endl<<endl;
     }
     else{
       cout<<(mir(s)?"is a mirrored string.":"is not a palindrome.")<<endl<<endl;
     }
   }
   
   return 0;
}
    