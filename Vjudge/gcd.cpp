#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main () {
    ll a, b; cin>>a>>b;
    cout << gcd(a, b) << '\n';
    return 0;
}