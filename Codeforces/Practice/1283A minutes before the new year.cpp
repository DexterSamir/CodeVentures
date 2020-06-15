#include<iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int a,b,t;
  cin>>t;
  
  while(t--){
  cin>>a>>b;
  a=23-a;
  b=60-b;
  if(a!=0) a*=60;
  cout<<a+b<<endl;
  }
}