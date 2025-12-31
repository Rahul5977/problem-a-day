#include<iostream>
using namespace std;
int main(){
    //lower bound in an array-> first value which is greater than or equal to given value
    vector<int>arr={15,20,25,30,35};
    int n=arr.size();
    int val=22;
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==val){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]<val){
            lo=mid+1;
        }else {
            if(mid>0 && arr[mid-1]<val){
                cout<<mid<<endl;
                break;
            }else hi=mid-1;
        }
    }

}