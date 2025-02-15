#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
    ll n; cin>>n;
    vector<ll>vec1;
    vector<ll>vec2;
    ll k;

    for(ll i=1; i<=n; ++i){
        vec1.push_back(i);
    }

    for(ll i=0; i<n-1; ++i){
        cin>>k;
        vec2.push_back(k);
    }

    sort(vec2.begin(), vec2.end());

    for(ll i=0; i<=n; ++i){
        if(vec1[i] == vec2[i]) continue;
        else{
            cout<<vec1[i]<<'\n';
            break;
        }
    }
    return 0;
}