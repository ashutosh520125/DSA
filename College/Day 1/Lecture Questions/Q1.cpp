#include<iostream>
using namespace std;

void removeDuplicate(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {

        if(a[i]==a[i+1])
        {
            c++;
            int temp=a[i+1];
            for(int j=i+1;j<n;j++)
            {
                a[j]=a[j+1];
                
            }
            a[n-1]=temp;
        }
    }
    for (int i = 0; i < n-c; i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    removeDuplicate(a,n);
    
    return 0;
    
}