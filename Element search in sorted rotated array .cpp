#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}    
    
int key(int arr[], int n , int t)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s < e)    
    {
      if(arr[s] <= t <= arr[e])
      {
        
        if(arr[mid] == t)
        {
            return mid;
        }

        //go to Right Part
        if(t > arr[mid])
        {
            s = mid + 1;
        }
        //go to Left Part
        else  //key < arr[mid]
        {
            e= mid - 1; 
        }

        mid = s + (e - s) / 2;
      }

      else 
      {
       while(s <= e)
       {
        if(arr[mid] == t)
        {
            return mid;
        }

        //go to Right Part
        if(t > arr[mid])
        {
            s = mid + 1;
        }
        //go to Left Part
        else  //key < arr[mid]
        {
            e= mid - 1; 
        }

        mid = s + (e - s) / 2;

        }
       }
    } 

}


int main()
{
    int arr[7] = {6, 8, 10, 17, 1 , 2 , 3};
    int target = 2;
    cout<<"Pivot is "<<getPivot(arr, 7)<<endl;

    cout<<"Target is "<<key(arr, 7, target);
}