#include <bits/stdc++.h>
using namespace std;
int t,a[10][5],res,b[10001];
string s;

int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    for (int i=1; i<=9; i++)
        for (int j=1; j<=4; j++)
        {
            a[i][j]=j;
        }
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        res=0;
        cin>>s;
        int q= s[1]-48;
        for (int j=1; j<=s.size(); j++)
            res+=j;
        q--;
        while (q>=1)
        {
            for (int j=1; j<=4; j++)
                res+=a[q][j];
            q--;
        }
        b[i]=res;
    }
    for (int i=1; i<=t; i++)
        cout<<b[i]<<endl;
}

