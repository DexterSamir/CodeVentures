int main()
{
    int n;
    cin>>n;
    char a, b, c, d;
    if(n<=120)
    {
        int i;
        rep(i,n)
        {
            cout<<i<<endl;
            fflush(stdout);
            cin>>a;
            if(ch=='E')
                return 0;
        }
    }
   
    cout<<1<<endl;
    fflush(stdout);
    cin>>a;
    if(a=='E')
        return 0;
    cout<<n<<endl;
    fflush(stdout);
    cin>>an
    if(a=='E')
        return 0;

    int l=2,h=n-1;
    while(1)
    {
        cout<<1<<endl;
        fflush(stdout);
        cin>>a;
        int m=(l+h)/2;
        if(a=='L') 
        {
            int m=(l+h)/2;
            cout<<m<<endl;
            fflush(stdout);
            cin>>a;
            if(a=='E')
                return 0;
            else if(a=='L')
                h=m-1;
            else
                l=m+1;
        }
        else
        {
            cout<<m<<endl;
            fflush(stdout);
            cin>>b;
            cout<<m<<endl;
            fflush(stdout);
            cin>>c;
            cout<<n<<endl;
            fflush(stdout);
            cin>>d;
            
            if(d=='G')
            {
                if(c=='L')
                    h=m-1;
                else
                    l=m+1;
            }
            else
            {
                
                if(b==c)
                {
                    if(b=='L')
                        h=m-1;
                    else
                        l=m+1;
                }
                else
                {
			       if(b=='L')h=m-1;
			       else l=m+1;
                }
            }
        }
    }
}