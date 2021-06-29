#include<iostream>
using namespace std;

void remOccurence(int arr[],int n, int key)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
            if(arr[i]==key){
            
            int temp=arr[i];
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];

            }
            arr[n-1]=temp;
        }
    }
    cout<<"\narray after removal of key occurences:"<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=key)
        {
            c++;
            cout<<arr[i]<<" ";
     } }
    
    cout<<"\nSize of array after removal of key occurences is: "<<n-c<<endl;
    

    
}

int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key: ";
    cin>>k;
    remOccurence(a,n,k);
   
    return 0;
}