#include<iostream>
using namespace std;

int printArray(int n, int arr[])
{
   for(int k = 0; k<n; k++)
   {
      cout<<arr[k]<<" ";
   } 
   cout<<endl;
}

void insertionSort(int n, int arr[]){
   for(int i = 1; i<n; i++)
   {
       int temp = arr[i];
       int j = i-1;

       for(; j >=0; j--)
       {
           if(arr[j] > temp)
           {
               arr[j + 1] = arr[j];
           }
           else
           {
               break;
           }
       }
       arr[j + 1] = temp;
   }
}

int main()
{
   int arr[7] = {10, 1, 7, 4, 8, 2, 11};

   insertionSort(7, arr);
   printArray(7, arr);

   return 0;
   
}