#include<bits/stdc++.h>
using namespace std;

void sum(int n)
{
    int a=0;
    if(n==0)
    {
        return ;
    }
    a=a+n;
    sum(n-1);
     cout<<a;

    
    
}

int main()
{   int a=0;
    int n=5;
    sum(n);
}