#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(int n){
    if(n <= 1) {
        return 1;
    } else {
        return (n * f(n - 1));
    }
}

int main() {
    ll n; cin>>n;
    cout<<f(n)<<'\n';
    return 0;
}