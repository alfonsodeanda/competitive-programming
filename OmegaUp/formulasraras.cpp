#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    double x, y, z; cin>>x>>y>>z;
    double solve = (x+x*(y + (z*z))) / ((x+M_PI)*(y+M_PI));
    cout<<solve<<'\n';
    return 0;
}