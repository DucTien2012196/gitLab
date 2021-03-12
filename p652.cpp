#include <iostream>
using namespace std;

int phan_am(int n)
{
	int phanAm = 1;
	for ( int i = 1 ; i <= n ; i++)
	{
		phanAm *= -i;
	}
return phanAm;
}

int phan_mu( int n)
{
	int mu = 3;
	for ( int j = 1 ; j <= n ; j++)
	{
		if( j % 2 == 0)
		{
			mu = mu + j;
		}
	}
return mu;
}

int tong (int m, int n)
{
	int tong = m;
	tong = tong + m * phan_am(m) * phan_mu(n) ;
	return tong;
}


int main()
{
	int m, n ;
	cout << "Nhap so nguyen m: ";
	cin >> m;
	cout << "Nhap so luot n: ";
	cin >> n;
	cout << tong(m,n);
	return 0;
}

