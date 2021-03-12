#include<bits/stdc++.h>
using namespace std;
char x;

int main()
{
    cin>>x;
    if (x>='a' && x<='z')
        x=x-32;
    if (x>='A' && x<='Z')
        x=x+32;
    cout<<x;
}
