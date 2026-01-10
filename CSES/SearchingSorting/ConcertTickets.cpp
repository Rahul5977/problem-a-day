#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>t(n), h(m) ,ans(m,-1);
    for(int i=0;i<n;i++) cin>>t[i];
    multiset<int>st;
    for(int i=0;i<n;i++) st.insert(t[i]);
    sort(t.begin(),t.end());
    while(m--){
        int x;
        cin>>x;
        auto it=st.upper_bound(x);
        if(it==st.begin()){
            cout<<-1<<endl;
            continue;
        }else{
            it--;
            cout<<*it<<endl;
            st.erase(it);
        }

    }
       

    




    
}