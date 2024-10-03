#include<iostream>
using namespace std;
int main( ){
    int m=4;
    int n=4;
    int arr[m][n]={{0,1,1,1},{0,0,1,1},{0,1,1,1},{0,0,0,1}};
    int max=0;
    int row=-1;
    for(int i=0; i<m;i++){
    int mid=0;
    int lo=0;
    int hi=n-1;
    int firstidx=-1;//first occurence
    int countones=0;//count no ones
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[i][mid]==1) {
          if(mid==0) firstidx=mid;
            if(arr[i][mid-1]!=1) {
                firstidx=mid;
                break;
            }
            else hi=mid-1;
        }
        else lo = mid+1;
    }
        if(firstidx!=-1) countones=n-firstidx;
        cout<<countones<<endl;
        if(max<countones) {
        max = countones;
        row =i;
        }
    }
    cout<<max<<" "<<row;
    
}