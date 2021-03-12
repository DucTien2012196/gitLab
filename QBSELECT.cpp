#include<bits/stdc++.h>
using namespace std;
int d[9]={0,0,1,2,4,5,8,9,10};
int n,a[4][10001],t;
long long f[9][10001],res;
int getbit(int x, int i)
{
    return ((x>>i)&1);
}
int sum(int x, int k)
{
    int s=0;
    for (int i=0; i<4; i++)
        if (getbit(x,i)==1)
            s+=a[i][k];
    return s;
}
int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    cin>>n;
    res=-1e9;
    t=-1e9;
    for (int i=0; i<4; i++)
        for (int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            t=max(t,a[i][j]);
        }
    if (t<0)
    {
        cout<<t;
        return 0;
    }
    for (int k=1; k<=n; k++)
    {
        for (int i=1; i<=8; i++)
        {
            for (int j=1; j<=8; j++)
            {
                if((d[i]&d[j])==0)
                    f[i][k]=max(f[i][k],f[j][k-1]+sum(d[i],k));
                res=max(res,f[i][k]);
            }
        }
    }
    cout<<res;
}
