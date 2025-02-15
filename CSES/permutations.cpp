#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
    ll n; cin>>n;
    vector<ll>vec1;
    vector<ll>vec2;

    if(n==4){
        cout<<"2 4 1 3";
        return 0;
    }

    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }

    for(ll i=1; i<=n; ++i){
        vec1.push_back(i);
    }

    for(ll i=0; i<n; ++i){
        if(vec1[i]%2!=0){
            vec2.push_back(vec1[i]);
        }
    }

    for(ll i=0; i<n; ++i){
        if(vec1[i]%2==0){
            vec2.push_back(vec1[i]);
        }
    }

    for(ll i=0; i<n; ++i){
        cout<<vec2[i]<<" ";
    }

    return 0;
}