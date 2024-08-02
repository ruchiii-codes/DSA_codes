#include<iostream>
using namespace std;

bool isprime(int n)
{
    
    for(int i=2; i<n; i++)
       {
        if(n%i==0)
          {
            return 0;  //Not Prime
          }
       }
      return 1; //Prime
}

int main()
{
    int n;
    cin >> n;
    
   if(isprime(n))
   {
    cout<<"Is a Prime no."<< endl;
   }
   else
   {
   cout<<"Not a Prime no."<< endl;
   }
}