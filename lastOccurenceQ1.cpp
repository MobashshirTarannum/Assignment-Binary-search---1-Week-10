//Q1->Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
//does not exist return -1.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<" enter target X =  "; 
    cin>>x;
    int arr[]={1,2,2,3,3,3,3,4,4,5,5,9,9,9,9};
    int n=15;
    int mid=0;
    int lo=0;
    int hi=n-1;
    bool flag = false;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]==x) {
            if(arr[mid+1]==x && mid+1<=n-1) lo=mid+1;
            else {
            cout<<"last ocurrence is "<<mid;
            flag=true;
            break;
            }
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
    }
    if(flag==false) cout<<-1;
}