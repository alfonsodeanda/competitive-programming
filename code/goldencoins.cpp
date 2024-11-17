#include <iostream>
using namespace std;

int main(){
    int x;
    int h=0;
    cin>>x;
    for(int i=0; i<x; i++){
        if(x>500){
            h+=1000;
            x=x-500;
        } else if(x>5){
            h+=5;
            x=x-5;
        }
    }
    cout<<h;
    return 0;
}