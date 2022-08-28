#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0;
    string s;
    char a[50];
    cout<<"enter a"<<endl;
    cin>>s;
    for(int z=0;z<s.length();z++){
        if(s.at(z)=='('){
            a[i]='(';
            i++;
        }
        else if(s.at(z)==')'){
            i--;
            if(a[i]=='('){
                i--;
            }
        }
    }
    if(i==-1){
        cout<<"match found";
    }
    else{
        cout<<"match not found";
    }

    return 0;
}