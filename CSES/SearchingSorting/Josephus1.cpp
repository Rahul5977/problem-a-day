#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) v[i]=i+1;
    //there are n children, siting in circular fashion
    //every other children is removed-> find the order
    //every even number to remmoved;
    // 1 2 3 4 5 6 7 8.       2 4 6 8  
    // 1 3 5 7.               3 7
    // 1 5                    5
    // 1                      1


    // 1 2 3 4 5 6 7 8 9 
    // 1 3 5 7 9 
    // 3 7
    // 3
    
    queue<int>q;
    for(int i=0;i<n;i++){
        q.push(v[i]);
    }
    while(!q.empty()){
        q.push(q.front());
        q.pop();
        cout<<q.front()<<" ";
        q.pop();
    }


}
int main(){
    solve();
}