#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>vec1;
vector<ll>vec2;

bool rec(int n){
    if(n>4){
        vec1.push_back(n);
        vec1.push_back(n-3);
        vec2.push_back(n-1);
        vec2.push_back(n-2);
        return rec(n-4);
    } else{
        if(n==1 or n==2) return false;
        if(n==3){
            vec1.push_back(1);
            vec1.push_back(2);
            vec2.push_back(3);
            return true;
        }
        if(n==4){
            vec1.push_back(1);
            vec2.push_back(2);
            vec2.push_back(3);
            vec1.push_back(4);
            return true;
        }
    }
}

int main () {
    ll n; cin>>n;
    if(rec(n)==true){
        cout<<"YES"<<'\n';
        cout<<vec1.size()<<'\n';
        for(ll i=0;i<vec1.size();i++){
            cout<<vec1[i]<<" ";
        }
        cout<<'\n'<<vec2.size()<<'\n';
        for(ll i=0;i<vec2.size();i++){
            cout<<vec2[i]<<" ";
        }
    } else{
        cout<<"NO"<<'\n';
    }
    return 0;
}