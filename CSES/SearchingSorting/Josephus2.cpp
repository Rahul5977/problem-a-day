#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Required
#include <ext/pb_ds/tree_policy.hpp>     // Required

using namespace std;
using namespace __gnu_pbds;

// Define the indexed_set
typedef tree<int, null_type, less<int>, rb_tree_tag, 
             tree_order_statistics_node_update> indexed_set;

void solve(){
    int n, k;
    cin >> n >> k;

    indexed_set s;
    // Fill the set with 1 to N
    for(int i = 1; i <= n; i++) {
        s.insert(i);
    }

    int index = 0; // Current position in the circle (0-based)
    
    while(!s.empty()){
        // Formula: New Index = (Current Index + K) % Current Size
        index = (index + k) % s.size();
        
        // Find the element at this index (O(log N))
        auto it = s.find_by_order(index);
        
        cout << *it << " ";
        
        // Remove it from the set (O(log N))
        s.erase(it);
        
        // Note: We don't need to increment 'index' manually because 
        // when we delete the element at 'index', the next element 
        // automatically "falls" into this index slot!
    }
}

int main(){
    solve();
}