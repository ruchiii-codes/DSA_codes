#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Ruchika");
    s.push("Gajanan");
    s.push("Vispute");

    cout<<"Top Element -> "<<s.top()<<endl;

    s.pop();
    cout<<"After POP Top Element -> "<<s.top()<<endl;

    cout<<"Empty or Not -> "<<s.empty()<<endl;
}