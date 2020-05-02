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
    int s=0;
    cin>>n;
    
    for(int i=2;i<n;i++) {
    	if(n%i==0) s=1;
    }
    
    if(s) cout <<n<<" nao eh primo"<<endl ;
    else cout<<n<<" eh primo"<<endl ;
    }
}