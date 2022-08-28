#include <stdio.h>
int binary(int a[],int n,int s){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(s==a[mid]){
            return 1;
        }
        else if(s<a[mid]){
            high=mid-1;
        }
        else if(s>a[mid]){
            low=mid+1;
        }
    }
    return 0;
}
int main() {
    // Write C code here
    // printf("Hello world");
    int a[5]={1,3,5,6,7};
    printf("%d ",binary(a,5,6));
    return 0;
}
