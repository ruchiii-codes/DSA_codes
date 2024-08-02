#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(6);
    d.push_back(4);
    d.push_back(8);
    for(int i:d)
    {
        cout<<i<<" "<<endl;
    }
    
    cout<<"Element at 2nd Index is -> "<<d.at(2)<<endl;

    cout<<"Array is Empty or Not -> "<<d.empty()<<endl;

    cout<<"First Element -> "<<d.front()<<endl; 

    cout<<"Last Element -> "<<d.back()<<endl; 

    d.pop_back();
    cout<<"After POP Back "<<endl;
    for(int i:d)
    {
        cout<<i<<" "<<endl;
    }

    d.pop_front();
    cout<<"After POP Front "<<endl;
    for(int i:d)
    {
        cout<<i<<" "<<endl;
    }
    
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase 1st element "<<endl;
    for(int i:d)
    {
        cout<<i<<" "<<endl;
    }

}