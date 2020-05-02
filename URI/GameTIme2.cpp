#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam
//all rights reserved©byDexterSam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b,c,d;
    
    cin>>a>>b>>c>>d;
    
    if(a==c){
    	if(b==d)
    	{
        int ans=24,an=0;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)" <<" E "<<an<<" MINUTO(S)"<<endl;
    	}
    	else if(d>b){
    	int ans=24,an=d-b;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;	
    	}
    	else if(d<b){
    	int ans=23,an=(d-b)+60;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;	
    	}
    }
    else{
    if(a>c){
    	if(d==b){
    	int ans=24+(c-a),an=0;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;
    	}
    	else if(d>b){
    	int ans=24+(c-a),an=d-b;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;	
    	}
    	else if(d<b){
    	int ans=24+(c-a),an=(d-b)+60;
    	cout<<"O JOGO DUROU "<<ans-1<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;	
    	}
    }
    else if(a<c)
    {
    	if(d==b){
        int ans=c-a,an=0;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;
    	}
    	else if(d>b){
    	int ans=c-a,an=d-b;
    	cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;	
    	}
    	else if(d<b){
    	int ans=c-a,an=(d-b)+60;
    	cout<<"O JOGO DUROU "<<ans-1<<" HORA(S)"<<" E "<<an<<" MINUTO(S)"<<endl;	
    	}
    }
    }
    return 0;
}
