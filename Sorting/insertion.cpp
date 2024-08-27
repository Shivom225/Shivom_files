#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        } 
        arr[j+1]=temp;       
    }
}


int main()
{
    int n=5;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}