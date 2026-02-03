#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    //indentify the range [1,r] from which every sum from 1 to r can be made
    long long reachable_sum=0;
    for (auto coin : arr){
        if(coin>reachable_sum+1){
            cout<<reachable_sum+1<<" ";
            return 0;
        }else{
            reachable_sum+=coin;
        }
    }
    cout<<reachable_sum+1<<" ";

    
}