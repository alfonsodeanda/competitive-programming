#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    vector<int>a(n);

    for(int i = 0; i<n i++){
        cin >> a[i];
    }

    map<int, int> counts;
    for(int i : a){
        counts[i]++;
    }
    ll x=0;
    for(auto count : counts){
        if(count.second > count.first){
            x += count.second - count.first;
        }
        else{
            x += count.second;
        }
    }

    cout << x << '\n';
    
    return 0;
}