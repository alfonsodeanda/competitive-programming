#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    ll x = 0;
    bool p = false;
    for(ll i = 1; i<=n; i++){
        x = (2 * i - 1);
    }
    cout<<x<<'\n';
    return 0;
}