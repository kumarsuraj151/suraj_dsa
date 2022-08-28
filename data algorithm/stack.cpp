#include <bits/stdc++.h>
using namespace std;


int main()
{
    stack<int> s;
    s.push(50);
    s.push(51);
    s.push(52);
     stack<int> ptr(s);
    //     ptr.pop();
    //     ptr.pop();
    //  cout<<ptr.size();

     for (int i = 0; i < 3; i++)
     {
        cout<<ptr.top()<<" ";
        ptr.pop();
     }
    
    return 0;
}