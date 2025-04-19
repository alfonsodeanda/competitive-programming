#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    for(ll i = 0; i<n; i++){
        string s;
        cin>>s;
        for(ll i= 0; i < 2; i ++){
            s.pop_back();
        }
        s.append("i");
        cout<<s<<'\n';
    }
    return 0;
}