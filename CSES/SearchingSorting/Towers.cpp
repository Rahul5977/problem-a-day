#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    //for every i-> if(upper bound of v[i] exist then replace the uper bpound with v[i] in the multiset ) if dosnt exist then add the ans+1
    int ans=1;
    multiset<int>st;
    st.insert(v[0]);
    for(int i=1;i<n;i++){
        auto it=st.upper_bound(v[i]);
        if(it!=st.end()){
            //found a tower 
            st.erase(it);  
        }else{
            //else replace it with v[i]
            ans++;
        }
        st.insert(v[i]);
    }
    cout<<ans<<endl;
}
int main(){
    solve();
}