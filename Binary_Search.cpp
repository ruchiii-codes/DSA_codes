#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        //go to Right Part
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        //go to Left Part
        else  //key < arr[mid]
        {
            end = mid - 1; 
        }

        mid = start + (end - start) / 2;
        
    }

    return -1;

}

int main()
{
    
    int even[8] = {2, 4, 6, 8, 10, 12, 14, 18,};
    int odd[5] = {3, 7, 9, 12, 17};

    int evenIndex = binarySearch(even, 8, 18);
    cout<< "Index of 18 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 9);
    cout<< "Index of 9 is " << oddIndex << endl;

    return 0;
}