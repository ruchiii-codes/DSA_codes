#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= n)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= n)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
   int even[8] = {1, 2, 6, 6, 6, 6, 6, 4 };

   cout<<"First Occurence of 3 is at Index "<< firstOcc(even, 8, 3)<<endl;
   cout<<"First Occurence of 3 is at Index "<< lastOcc(even, 8, 3)<<endl;
   
   return 0;
}