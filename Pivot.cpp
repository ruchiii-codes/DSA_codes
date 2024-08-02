/*
 We have Binary Array {1, 3, 8, 10, 17}
 We will rotate it by 4 then this array will be {3, 8, 10, 17, 1} <--(this array is called as Sorted Rotated Array)
                                          index  0  1   2   3   4 
Pivot is 4 
 */                               
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

int main()
{
    int arr[5] = {3, 8, 10, 17, 1};
    cout<<"Pivot is "<<getPivot(arr, 5)<<endl;
}