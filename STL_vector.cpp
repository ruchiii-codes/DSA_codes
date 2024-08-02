#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> v;
   cout<<"Capacity "<<v.capacity()<<endl;

   v.push_back(1);
   cout<<"Capacity "<<v.capacity()<<endl;

   v.push_back(2); 
   cout<<"Capacity "<<v.capacity()<<endl;

   v.push_back(3);
   cout<<"Capacity "<<v.capacity()<<endl;

   v.push_back(4);
   cout<<"Capacity "<<v.capacity()<<endl;

   cout<<"Size "<<v.size()<<endl;

   cout<<"Element at 2nd Index -> "<<v.at(2)<<endl;

   cout<<"First Element -> "<<v.front()<<endl; 

   cout<<"Last Element -> "<<v.back()<<endl; 

   cout<<"Array is Empty or Not -> "<<v.empty()<<endl;

   v.pop_back();
   cout<<"After POP "<<endl;
   for(int i:v)
   {
    cout<<i<<" "<<endl;
   }

   v.clear();
   {
    cout<<"After clear size of vector v "<<v.size()<<endl;
   }

   cout<<"Array is Empty or Not -> "<<v.empty()<<endl;

   vector<int> a(5,1);
   cout<<"Print a "<<endl;
   for(int i:a)
   {
    cout<<i<<" ";
   }

}