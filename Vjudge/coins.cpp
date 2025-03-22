#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin >> n;
    vector <int> x = {n};

    for(int i = n-1; i>0; i--){
        if(n%i) continue;
        bool valid = true;
        for(int j : x){
            if(j%i){
                valid = false;
                break;
            }
        }
        x.push_back(i);  
    }

    for(int i : ans){
        cout<<i<<' ';
    }
    cout<<'\n';
    return 0;
}