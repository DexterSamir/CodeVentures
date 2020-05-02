#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    while (cin>>n){
    	int sum=0;
    	if(n==0) break;
        if(n%2==1) n++;
        for(int i=n,j=1;j<=5;j++,i+=2) {
        	
 			sum+=i;
   	 }
    	cout<<sum<<endl ;
}
}