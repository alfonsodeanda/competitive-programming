#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    double x; cin>>x;
    double y = (x + 5) / (2 * (x + 1));
    double z = (y*y + x*(x - 2*y)) / (x*y);
    cout<<z<<'\n';
    return 0;
}