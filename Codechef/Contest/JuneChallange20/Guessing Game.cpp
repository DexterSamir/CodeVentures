#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define mp make_pair
#define sp ": "
#define cs "Case "
#define fi first
#define sn second 
#define po(x) x*x
/* STL */
#define vi vector<int>v
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mem(a, n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define mx(v) *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n) for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n) for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(__typeof(a)i=(a);i<=(b);i++)

#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define db(something)   cout<<#something<<" - "<<something<<"\n";         
int main()
{
    int n;
    cin>>n;
    char a, b, c, d, e;
    int md;
    bool z=false;
    bool zz=false;
    bool newinpt=false;
    bool rpt=false;
    int l=2,h=n-1;
        cout<<1<<endl;
        fflush(stdout);
        cin>>a;
        if(a=='E' ) return 0;
        int hi, lo;
    while(1)
    {
    	int m=(l+h)/2;
    	if(newinpt){
    		cout<<1<<endl;
            fflush(stdout);
            cin>>a;
            newinpt=false;
    	}
    	
        if(a=='L') 
        {
        	int m;
            if(z) m=(hi+lo)/2;
            else m=(l+h)/2;
            
            cout<<m<<endl;
            fflush(stdout);
            cin>>a;
            if(a=='E')
                return 0;
            else if(a=='L')
                h=m-1;
            else
                l=m+1;
                
            newinpt=true;
            continue;
        }
        else
        {
            cout<<m<<endl;
            fflush(stdout);
            cin>>b;
            if(b=='E' ) return 0;
            cout<<n<<endl;
            fflush(stdout);
            cin>>c;
            if(c=='E') return 0;
            
            if(c=='G')
            {
                if(b=='L')
                    h=m-1;
                else
                    l=m+1;
                    
                rpt=true;
               
            }
            else
            {
                	if(b=='L')
                    hi=m-1;
                    else
                    lo=m+1;
                	z=true;
                    newinpt=true;
                    continue ;
                
            }
        }
        if(rpt)
    	{
    		
    		int m;
            m=(l+h)/2;
            
            cout<<m<<endl;
            fflush(stdout);
            cin>>a;
            if(a=='E')
                return 0;
            else if(a=='L')
                h=m-1;
            else
                l=m+1;
                
            newinpt=true;
            rpt=false;
 
        }
    }
}