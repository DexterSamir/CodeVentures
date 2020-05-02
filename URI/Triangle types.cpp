#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double a, b, c;
    
    cin>>a>>b>>c;
    if(b<c){
    	swap(c,b);
    }
    
    if(a<b){
    	swap(b,a);
    }
    if(b<c){
    	swap(c,b);
    }
    
    if(a>=b+c){
    	cout << "NAO FORMA TRIANGULO"<<endl;
    }
    else{
    	
    if(a*a == (b*b + c*c)){
    	cout<<"TRIANGULO RETANGULO"<<endl;
    }
     if(a*a > (b*b + c*c)){
    	cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if(a*a < (b*b + c*c)){
    	cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a==b&& b==c){
    	cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if((a==b && a!=c)||((b==c)&& b!=a)||((c==a)&&c!=b)){
    	cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    }
   return 0; 
}