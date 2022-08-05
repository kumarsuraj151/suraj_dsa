// C++ program to display "Hello World"

// Header file for input output functions
#include <iostream>
using namespace std;


void sort(int *a,int n){
    int key,j;
    for (int i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void print(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

// Main() function: where the execution of program begins
int main()
{
	// prints hello world
	// cout << "Hello World jsdfjdsfhkhdgfhkd";
    int a[]={3,5,2,8,7};
    print(a,5);
    cout<<endl;
    sort(a,5);
    print(a,5);

	return 0;
}
