#include<iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int selectionSort(int n, int arr[])
{
   {   
     for(int i = 0; i < n-1; i++)
     {
         int minIndex = i;

         for(int j = i+1; j < n; j++)
         {
             if(arr[j] < arr[minIndex])
                     minIndex = j;
         }
         swap(arr[minIndex],arr[i]);
     }
}
}

int main()
{
  int arr[5] = {5, 3, 1, 2, 4};

  cout<<"Selection Sort of this Array is " <<endl;
  selectionSort(5, arr);
  printArray(arr, 5);

  return 0;
}