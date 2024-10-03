//Q2->Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<iostream>
using namespace std;
int main( ){
    int arr[]={0,0,0,0,1,1};
    int n=6;
    int mid=0;
    int lo=0;
    int hi=n-1;
    int count=0;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]==1) {
            if(arr[mid-1]==1) hi=mid-1;
           else {
            count=n-mid;//first find first occurence then subtract it from total no elements
            break;
           }
        }
        else if(arr[mid]==0){
            lo=mid+1;
        }
        // else if(arr[mid]>1){//because all elements are binary no (i.e not more than one)
        //     hi=mid-1;
        // }
    }
    cout<<count;
}