#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, m;
    cin>>m;
    while(m--){
    int sum=0;
    cin>>n;
    
    for(int i=1;i<n;i++) {
    	if(n%i==0) sum+=i ;
    }
    
    if(sum==n) cout <<n<<" eh perfeito"<<endl ;
    else cout<<n<<" nao eh perfeito"<<endl ;
    }
}