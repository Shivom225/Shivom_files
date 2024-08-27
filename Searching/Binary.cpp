#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int n,int key)
{
    int s=0,e=n-1,m=0;
    while(s<=e)
    {
        m=(s+e)/2;
        if(arr[m]==key)
        {
            cout<<"Found";
            return arr[m];
        }
        else if(arr[m]<key)
        {
            s=m+1;
        }  
        else{
            e=m-1;
        }              
    }
    return -1;
}
int main()
{
    int n=5;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<binary(arr,n,key);

}