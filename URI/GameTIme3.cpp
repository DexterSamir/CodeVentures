#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b, c, d, ans, an; 
    cin>>a>>b>>c>>d;
    
    ans= c-a;
    
    if (ans< 0) {
      ans = 24 + (c - a); 
     }
    
    an = d - b; 
    if (an < 0) {
       an = 60 + (d - b); 
  	 ans = ans-1;
     }
    if (a == c && b == d) { 
       cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
     } 
    else 
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S) E "<<an<<" MINUTO(S)\n"; 
   return 0; 
}