#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    for(ll i = 0; i<t; i++){
        string str; cin>>str;
        ll q; cin>>q;
        for(ll j = 0; j<q; j++){
            ll i; cin>>i;
            string v; cin>>v;
            str.replace(i-1, 1, v);
            if(str.find("1100")!= string::npos) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}