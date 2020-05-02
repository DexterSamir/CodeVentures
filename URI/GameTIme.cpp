#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam
//all rights reserved©byDexterSam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b;
    
    cin>>a>>b;
    
    if(a==b){
    	int ans=24;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<endl;
    }
    else{
    if(a>b){
    	int ans=(24-a)+b;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<endl;
    }
    else
    {
        int ans=b-a;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<endl;
    }
    }
    return 0;
}
