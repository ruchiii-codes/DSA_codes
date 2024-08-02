#include<iostream>
using namespace std;

int power(int num1 , int num2)
{

    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }

    return ans;

}
int main ()
{

    int a, b;
    cin>> a >> b;
    
    int ans1 = power(a,b);
    cout<<" Answer is "<<ans1<<endl;

    int c, d;
    cin>> c >> d;
    
    int ans2 = power(c,d);
    cout<<" Answer is "<<ans2<<endl;

    int e, f;
    cin>> e >> f;
    
    int ans3 = power(e,f);
    cout<<" Answer is "<<ans3<<endl;

}