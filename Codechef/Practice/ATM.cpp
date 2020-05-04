#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double  n;
    int m;
    cin>>m>>n;
    
    if(m>n)cout<<fixed <<setprecision (2)<<n<<endl;
    else{
    	if(m%5==0 && m!=0 && m+0.5<n){
    		n-=m;
    		cout<<fixed <<setprecision (2)<<n-0.50<<endl ;
    	}
    	else
    	   cout<<fixed <<setprecision (2)<<n<<endl ;
    }
    
}