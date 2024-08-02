#include<iostream>
using namespace std;

int INT_MAX,INT_MIN;

int getMax(int num[], int n)
{

    int maxvalue = INT_MIN;  

    for(int i=0; i<n; i++)
    {
      //maxvalue = max(maxvalue, num[i])
      if (num[i] > maxvalue)
        {
            maxvalue = num[i];
        }
    }

    return maxvalue;

}

int getMin(int num[], int n)
{
    
    int minvalue = INT_MAX;  

    for(int i=0; i<n; i++)
    {
        //minvalue = min(minvalue, num[i])
       if (num[i] < minvalue)
        {
            minvalue = num[i];
        }
    }

    return minvalue;

}

int main()
{
    
    int size;
    cin >> size;

    int num[100];
    
    for(int i=0; i<size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;

}