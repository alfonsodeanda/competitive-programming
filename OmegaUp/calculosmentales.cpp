#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    double n; cin>>n;
    double x = n;
    cout<<x<<'\n';
    x += 5; cout<<x<<'\n';
    x = x * x; cout<<x<<'\n';
    x = x / (n/3); cout<<x<<'\n';
    x = x * x * x; cout<<x<<'\n';
    return 0;
}