#include <bits/stdc++.h> 

using namespace std; 
#define ll long long

int countOddSum(vector<ll>a, ll n)  
{ 

    int odd = 0, c_odd=0, result = 0; 

    for(int i=0;i <n;i++) { 

        if(a[i]&1) { 

            odd = !odd; 

        } 

        if(odd) { 

            c_odd++; 

        } 

    } 

    for(int i=0; i<n; i++) { 
        result += c_odd; 
        if(a[i]&1) { 
            c_odd = (n-i-c_odd); 
        } 
    }       
    return result; 
} 

int main()  
{  
    ll n,t;
    cin>>t;
    
    while(t--){
      cin>>n;

      vector<ll> v(n) ; 
      iota (begin(v),end(v), 1);
    
      cout<< countOddSum(v, n) <<endl; 
    }
    return 0;
} 