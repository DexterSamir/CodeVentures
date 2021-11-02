#include <bits/stdc++.h>
using namespace std;

//holding ciphered combos
string a,b;
//holding cipher patterns
vector<int>vec={1,2,2,1,2};


void ceasrCipher(int vecnum){
    int n;
    // enter integer valuue k, shifting value
    cout<<"Enter ceaser key of string"<<vecnum<<endl;
    cin>>n;
    if(n>26) n%=26;
    for(char i='A' ;i<='Z';i++){
        char c=i+n;
        if(c>'Z')
            c= c-'Z' + 'A' -1;
        //cout<<i <<" --> "<<c<<endl;
        if(vecnum==1) a+=c;
        else b+=c;
    }
}

int main(){
 a=b="";
 ceasrCipher(1);
 ceasrCipher(2);
 string s;
 //cout<<a<<endl<<b;
 cout<<"Enter plain Text: ";
 cin>>s;

    int i,j=0;
    for(i=0;i<s.size();i++,j++)
    {
        j%=5;
        if(vec[j]&1){
            cout<<a[s[i]-'a'];
        }
        else{
            cout<<b[s[i]-'a'];
        }
    }
}
