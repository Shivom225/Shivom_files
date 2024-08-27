#include<bits/stdc++.h>
using namespace std;

void backTrack(int n,int count)
{
    
    if(n==0)
    {
        return ;
    }
    backTrack(n-1,count+=1);
    cout<<count;
    

}

int main()
{
    int count=0;
    int n=5;
    backTrack(n,count);

}