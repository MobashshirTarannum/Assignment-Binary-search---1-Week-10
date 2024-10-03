//Q4->Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,5,6,7};
    int n=8; 
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid+1) lo=mid+1;
            if(arr[mid]==mid){
                if(arr[mid]==arr[mid-1]) {
                  cout<<arr[mid];
                  break;
                }
                else hi=mid-1;
            }
    }
}