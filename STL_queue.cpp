#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Ruchika");
    q.push("Gajanan");
    q.push("Vispute");

    cout<<"Size "<<q.size()<<endl;
    cout<<"First Element -> "<<q.front()<<endl;
    
    q.pop();
    cout<<"Size Arter POP "<<q.size()<<endl;
    cout<<"First Element -> "<<q.front()<<endl;
}