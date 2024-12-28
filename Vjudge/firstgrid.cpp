#include <bits/stdc++.h>

using namespace std;

int main () {
    string s1; cin>>s1;
    string s2; cin>>s2;

    bool flag=true

    if(s1[0]==s2[0]) continue;
    if(s1[1]==s2[1]) continue;

    if(s1[0]==s1[1] && s2[1]==s1[1] || s1[0]==s1[1] && s2[0]==s1[0]) continue;
    if(s1[0]==s1[1] && s2[0]==s1[1] || s1[0]==s1[1] && s2[0]==s1[0]) continue;
    return 0;
}