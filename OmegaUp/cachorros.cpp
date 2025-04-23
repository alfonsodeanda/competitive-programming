#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int c, p, h; cin>>c>>p>>h;
    c-=p; c=c%(h+1); c=p+c;
    cout<<c<<'\n';
    return 0;
}