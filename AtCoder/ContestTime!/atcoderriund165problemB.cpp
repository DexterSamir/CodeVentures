#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam
//Site: Atcoder
//Contest no: Atcoder 165
//Problem no: B
//Name : 1%

int main()
{  
    long long i=0,n=100,m;
    
    cin>>m;
   
    while(m>n){
       n+= n/100;
       i++;
    }
    
    cout<<i<<endl ;
}
    