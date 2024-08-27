#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int add=0;
    while(n>0)
    {
        int r=n%10;
        add=(add*10)+r;
        n/=10;
    }

cout<<add;
}