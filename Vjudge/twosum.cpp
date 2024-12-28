#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, t; cin >> n >>t;

    bool siono=false;
    set<int>st;
    
    for (int i=0; i<n; i++){
        int a; cin>>a;
        st.insert(a);
    }
    
    for (int i : st){
        if(st.count(t-i)){
            siono=true;
            break;
        }
    }
    
    cout << (siono ? "YES" : "NO")<<'\n';
    
    return 0;
}