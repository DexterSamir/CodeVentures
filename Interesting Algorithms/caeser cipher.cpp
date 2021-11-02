#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>26) n%=26;
    
    for(char i='A' ;i<='Z';i++){
        char c=i+n;
        //cout<<c;
        if(c>'Z')
            //c = char(int(c)-90+65-1);
            c= c-'Z' + 'A' -1;
        cout<<i <<" --> "<<c<<endl;
    }
}
