#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b, sum=0,an=0;
    cin>>a;
    while(cin>>b){
    	if(b>a) break;
    }
    
    for(int i=a;i<=b;i++) {
    	sum+=i; an++;
    	if(sum>b){
    		break;
    	}
    }
    
    cout<<an<<endl ;
}