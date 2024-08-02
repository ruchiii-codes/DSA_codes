#include<iostream>
using namespace std;

int power()
{
    int a, b;
    cin>> a >> b;

    int ans = 1;

    for(int i = 1; i<=b; i++)
    {
        ans = ans * a;
    }

    return ans;
}

int main()
{
    
    int ans1 = power();
    cout<<"Answer is "<< ans1 <<endl;

    int ans2 = power();
    cout<<"Answer is "<< ans2 <<endl;

    int ans3 = power();
    cout<<"Answer is "<< ans3 <<endl;

    return 0;
}