#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool prime ()
{
    int n;
    cin>>n;
    int count =0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            if(i!=n/i)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        return true;
    }
    return false;
}

int main()
{
    cout<<prime();
}