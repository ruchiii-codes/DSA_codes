#include<iostream>
#include<list>
using namespace std;

int main ()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    for(int i:l)
    {
        cout<<i<<" "<<endl;
    }

    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l)
    {
        cout<<i<<" "<<endl;
    }
    
    list<int> a(l);
    cout<<"Copy this l list in new a list "<<endl;
    for(int j:a)
    {
        cout<<j<<" "<<endl;
    }
    
    list<int> b(5,100);
    cout<<"Direct for size and initialization "<<endl;
    for(int k:b)
    {
        cout<<k<<" ";
    }

}