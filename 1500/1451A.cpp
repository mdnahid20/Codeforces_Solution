#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<=n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c(0);
        cin>>n;
        while(n>1)
        {
            if(n>3)
            {
                ++c;
                if(n%2==0)
                    n=2;
                else
                    --n;
            }
            else
            {
                --n,++c;
            }
        }
        cout<<c<<endl;
    }
}

