#include<iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for(int k = 0; k<n; k++)
    {
       cout<<arr[k]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n)
{
    bool swapped = false;
    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1]) // for Increasing Order.     (arr[j] < arr[j+1]) is for Decreasing Order.
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
          //Already Sorted
          break;
    }
}

int main()
{
    int n ;
    cin>>n;

    int arr[] = {10, 1, 7, 6, 14, 9};

    bubblesort(arr, n);
    printArray(arr, n);
    
    return 0;

}


