#include<bits/stdc++.h>
using namespace std;
int x,y;
int main()
{
    cin>>x;
    cout<< "Nhap vao khoang cach: "<< x <<" "<< "km"<<endl;
    //cin>>x;
    if (x<=1)
    {
        y=15000;
        cout<<"Gia tien la "<< y <<" "<< "VND";
    }
    if (1<x && x<=6)
    {
        y=15000+(x-1)*13500;
        cout<<"Gia tien la "<< y<<" "<< "VND";
    }
    if (x>6)
    {
        y=15000+5*13500+(x-6)*11000;
        if (x<=120)
            cout<<"Gia tien la " <<y<<" "<<"VND";
        else
            cout<<"Gia tien la "<<y-y/10<< "VND";
    }
}
