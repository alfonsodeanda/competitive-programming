#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a, b, c; cin >> a >> b >> c;
    ll m = 0;
    ll n = 1;
    ll x = 0;
    while(n < c){
        m+=b*n;
        while(m>=a){
            m-=a;
            n+=1;
        }
        x++;
    }
    cout << x << '\n';
    return 0;
}