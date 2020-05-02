#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double sum=0, j=1;
    
    for(double i=1;i<=39;i+=2) {
    	sum+=(i/j);
    	j*=2;
    }
    
    cout<<fixed <<setprecision (2)<<sum <<endl ;
}