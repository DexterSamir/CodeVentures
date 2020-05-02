#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	cin>>n;
	
	while (n--){
		
	   string a, b; cin>>a>>b;
	   int p1=0,p2=0,no=0,bo=0,mo=0;
	   
	   if(a.at(1)=='t'){
   		if(b.at(1)=='t' ){
   			mo=1;
   		}
   		else{
   			p1=1;
   		}
   	}
   	else if(a.at(1)=='e'){
   		if(b.at(1)=='t' ){
   			p2=1;
   		}
   		if(b.at(1)=='e' ){
   			no=1;
   		}
   		if(b.at(1)=='a' ){
   			p1=1;
   		}
   	
   	}
   	else if(a.at(1)=='a'){
   		if(b.at(1)=='t' ){
   			p2=1;
   		}
   		if(b.at(1)=='e' ){
   			p2=1;
   		}
   		if(b.at(1)=='a' ){
   			bo=1;
   		}
   	
   	}
   	
   	//---Winner Time--
   	if(p1) cout<<"Jogador 1 venceu"<<endl ;
   	if(p2) cout<<"Jogador 2 venceu"<<endl ;
   	if(bo) cout<<"Ambos venceram"<<endl ;
   	if(no) cout<<"Sem ganhador"<<endl ;
   	if(mo) cout <<"Aniquilacao mutua"<<endl ;
    
    }
    
    
}