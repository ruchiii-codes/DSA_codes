#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if( arr[i] == key )
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = { 6, 2, -9, 10, 3, 8, -12, 17, 0, -1};

    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;
    
    bool found = search (arr, 10, key);
    
    if(found)
    {
         cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is Absent" << endl;
    }

    return 0;

}