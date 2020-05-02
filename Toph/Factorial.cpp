#include <bits/stdc++.h>
using namespace std;

#define max 1000
//Compiler version g++ 6.3.0
int mul(int res[],int x,int n){
	int c=0;
	
	for(int i=0;i<x;i++){
		int p= res[i]*n + c;
		res[i]= p%10;
		c=p/10;
	}
	
	while(c){
		res[x]= c%10;
		c=c/10;
		x++;
	}

	
	return x;
}

void fact(int n){
	
	int res[max];
	
	res[0]=1;
	
	int res_size = 1;
	
	for(int i=2;i<=n;i++){
		res_size = mul(res,res_size,i);
	}
	
	int j=0,sum=0;
	for(int i=3 ; i>=0;i--){
	    sum+=res[i];
		if(res[i]) {
			j=1;
		}
	
		if(j)
		cout<<res[i];
		
	}
	if(!sum)
		cout<<"0000";
	
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    cin>>n;
    
    fact(n);
    
}