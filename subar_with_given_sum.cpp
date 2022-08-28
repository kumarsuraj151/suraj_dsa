//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
   

     int sum(int arr[],int i,int j){
           int su=0;
            for (int z=i;z<=j;z++){
                su=su+arr[z];
            } 
            return su;
        }
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
       // Your code heres
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
    return v;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends