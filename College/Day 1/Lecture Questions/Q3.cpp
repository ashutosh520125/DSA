#include<iostream>
using namespace std;

void alternate(int arr[],int n)
{
    int Narr[n];
    int mid=n/2;
    for(int i=0,j=mid;i<mid,j<n;)
    {
        
        for(int k=0;k<n;k++)

            if(k%2!=0)
            {
                Narr[k]=arr[j];
                j++;
            }
            else
            {
                Narr[k]=arr[i];
                i++;
            }
        }
    
    for(int i=0;i<n;i++)
    {
        cout<<Narr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    if(n%2==0){
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    alternate(a,n);}
    else
    {
        cout<<"Invalid Size";
    }
    return 0;
}