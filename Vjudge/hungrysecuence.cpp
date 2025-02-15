#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 10000000;
bool esPrimo [N+1];
vector <ll> vec;

void calcularPrimo(){
    esPrimo[0] = esPrimo[1] = true;

    for(ll i = 2; i <= N; ++i){
        if(esPrimo[i]) continue;

        vec.push_back(i);

        for (ll j = i*i; j <= N; j+=i) {
            esPrimo[j] = true;
        }
        
    }
}

int main(){
    ll n; cin>>n;
    calcularPrimo();
    for (ll i = 0; i < n; ++i) {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}