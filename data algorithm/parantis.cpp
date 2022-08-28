#include <iostream>
#include <stack>
using namespace std;

char opposite(char a)
{
    if (a == ')')
    {
        return '(';
    }
    else if (a == '}')
    {
        return '{';
    }
    else if (a == ']')
    {
        return '[';
    }
}

int paranthesis(string s)
{
    stack<char> str;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[')
        {
            str.push(s[i]);
        }
        else if (s.at(i) == ')' || s.at(i) == '}' || s.at(i) == ']')
        {
            if (str.top() == opposite(s.at(i)))
            {
                str.pop();
            }
        }
    }
    if (str.empty())
        return 1;
    else
        return 0;
}
int main()
{
    string s = "[(){}";

    cout<<paranthesis(s)<<endl;

    // cout<<opposite(')')<<endl;
    return 0;
}