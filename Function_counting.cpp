#include<iostream>
using namespace std;

void printCounting(int n)
{
    //Function Body
    for(int i = 1; i<=n; i++)
    {
        cout<< i << " ";
    }
}
int main ()
{
    int n;
    cin >> n;

    printCounting(n);  //Function Call

    return 0;
}