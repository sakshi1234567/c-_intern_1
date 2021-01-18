#include <iostream>
using namespace std;

int main()
{
    int min1,min2;
    int arr[25],n,i;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter "<<n<<" elemenets : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]<arr[1])
    {
        min1=arr[0];
        min2=arr[1];
    }
    else
    {
        min1=arr[1];
        min2=arr[0];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2)
        {
            min2=arr[i];
        }
    }
    cout<<"Smallest element : "<<min1<<endl;
    cout<<"Second smallest element : "<<min2;
}