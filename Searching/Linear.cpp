#include<bits/stdc++.h>
using namespace std;

int linear(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
        
    }
    
}

int main()
{
    int n=5;
    int arr[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<< linear(arr,n,key);

}