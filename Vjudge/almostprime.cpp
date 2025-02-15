#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 10000000;
ll esCasiPrimo [N+1];
vector <ll> almostPrimes;

void calcularCasiPrimos(){
    esCasiPrimo[0] = esCasiPrimo[1] = 0;

    for(ll i = 2; i <= N; ++i){
        if(esCasiPrimo[i] != 0) continue;

        for (ll j = i*2; j <= N; j+=i) {
            esCasiPrimo[j]++;
        }

    }
}

int main(){
    ll n; cin>>n;
    calcularCasiPrimos();

    ll solve=0;
    for (ll i = 0; i <= n; ++i) {
        if(esCasiPrimo[i] == 2) solve++;
    }
    
    cout<<solve;
    return 0;
}