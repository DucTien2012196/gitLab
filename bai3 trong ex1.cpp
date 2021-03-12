#include<bits/stdc++.h>
using namespace std;
double h;
int x,t;

int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    cin>>h;
    cout<<"Nhap so gio: "<<h<<"h\n";
    x=(int)h;
    if (0<=h && h<=3)
    {
        t=5;
        cout<<"Phi phai tra la "<<t<<"$";
    }
    else
        if (3<h && h<=9)
        {
            //t=6*x;
            cout.precision(2);
            cout<<"Phi phai tra la "<<h/5<<"$";
        }
        else
            cout<<"Phi phai tra la "<<60<<"$";
}
