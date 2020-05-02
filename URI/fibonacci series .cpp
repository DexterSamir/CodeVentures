#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, m,a=0, b=1,c, fib[61];
    cin>>n;
    for(int i=0;i<61;i++) {
    		fib[i]=a;
    		
    		c=a+b;
    		a=b;
    		b=c;
    	}
    while (n--){
        cin>>m;
    	cout<<"Fib("<<m<<") = "<<fib[m]<<endl ;
    }
    
    
}