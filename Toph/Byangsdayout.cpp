#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n,a,b,c,d;
    
    cin>>n;
    while(n--){
    	d=0;
    	cin>>a>>b>>c;
    	if(a+b>=c) d++;
    	if(b+c>=a) d++;
    	if(c+a>=b) d++;
    
        cout<<((d==3)?"Yes" : "No")<<endl;
    }
    
    
}