#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
      {   
        int j=1;
          while(j<n-i-1)
            {
              cout<<" ";
            }
          while(j<2*i+1)
            {
              cout<<"*";
            }  
          while(j<n-i-1)
            {
              cout<<" ";
            }  
        cout<<endl;
        i=i+1;    
      }

}