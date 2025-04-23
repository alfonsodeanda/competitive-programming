#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int a, b, c; cin>>a>>b>>c;
    if(a == b and b == c and c == a) cout<<"equilatero"<<'\n';
    else if(a != b and b != c and c != a) cout<<"escaleno"<<'\n';
    else cout<<"isosceles"<<'\n'; 
    return 0;
}