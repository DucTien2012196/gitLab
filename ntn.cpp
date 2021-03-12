#include<bits/stdc++.h>
using namespace std;
int d,t,n,used[100001];

int main()
{
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    cin>>d>>t>>n;
    if (n%4==0)
    {
        if (n%100!=0)
            used[n]=1;
        else if (n%400==0) used[n]=1;
    }
    if (t>12)
        cout<<"khong hop le";
    else
    {
        if (t==1 || t==3 ||t==5 ||t==7 ||t==8 ||t==10 ||t==12)
        {
            if (d>=32)
                cout<<"khong hop le";
            else
            {
                d++;
                if (d>31)
                {
                    d=1;
                    t++;
                    if (t>12)
                    {
                        d=1;
                        t=1;
                        n++;
                    }
                }
                cout<<d<<"/"<<t<<"/"<<n;
            }
        }
        else
            if (t==2)
            {
                if (used[n]==0 && d>=29)
                    cout<<"khong hop le";
                else
                {
                    d++;
                    if (used[n]==1)
                    {
                        if (d>29)
                        {
                            d=1;
                            t++;
                        }
                    }
                    else
                        if (d>28)
                        {
                            d=1;
                            t++;
                        }
                    cout<<d<<"/"<<t<<"/"<<n;
                }
            }
            else
            {
                if (d>=31)
                    cout<<"khong hop le";
                else
                {
                    d++;
                    if (d>30)
                    {
                        d=1;
                        t++;
                    }
                    cout<<d<<"/"<<t<<"/"<<n;
                }
            }
    }
}
