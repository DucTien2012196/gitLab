#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main ()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
	double x,y;
	cout << " Nhap vao khoang cach: ";
	cin >> x;
	cout << " Khoang cach cua ban la "<< x<< "km\n";
	if (x <= 1)
	{
		y=x*15000;
		cout<<"Gia tien la "<<(int)y<<" vnd";

	}
	if (1< x && x <=6)
	{
		y= 15000 + (x-1) * 13500;
		cout << " Gia tien la "<< (int)y <<" vnd";
	}
	if (6<x)
	{
	    if (x<=120)
        {
            y= 15000 + 5 * 13500 + (x-6)* 11000;
            cout << " Gia tien la "<< (int)y <<" vnd";
	    }
        else
        {
            y= (15000 + 5*13500 + (x - 6)*11000) - ((10 /100) * (15000 + 5*13500 + (x - 6)*11000));
            cout << " Gia tien la "<< (int)y <<" vnd";
        }
	}
	return 0;
}
