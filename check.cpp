#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int i, int j)
{
    int su = 0;
    for (int z = i; z <= j; z++)
    {
        su = su + arr[z];
    }
    return su;
}
// Function to find a continuous sub-array which adds up to a given number.
void subarraySum(int arr[], int n, int s)
{
    vector<int> v;
    // Your code heres
    int i = 0, j = 0;
    int a;

    a = arr[0];
    do
    {
        if (a < s)
        {
            j = j + 1;
            a = sum(arr, i, j);
        }
        else if (a > s)
        {
            i = i + 1;
            a = sum(arr, i, j);
        }
    } while (a != s);
    if(a==s){
        v.push_back(i);
        v.push_back(j);
    }
    // return v;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << "hell";
        cout << v[i] << " ";
    }
}
int main()
{
    // // int n;
    //     int s;
    //     // cin>>n>>s;
    //     int arr[n];
    //     // const int mx = 1e9;
    //     for(int i=0;i<n;i++)
    //     {
    //         cin>>arr[i];
    //     }
    //     vector<int>res;
    //     subarraySum(arr, n, s);

    // for(int i = 0;i<res.size();i++)
    //     cout<<res[i]<<" ";
    // cout<<endl;

    int arr[] = {1, 2, 3, 7, 5};
    subarraySum(arr, 5, 7);
    // cout<<sum(arr,1,2);
    return 0;
}