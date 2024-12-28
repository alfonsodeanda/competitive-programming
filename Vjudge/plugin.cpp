#include <iostream>
#include <stack>
using namespace std;

int main(){
    string phrase;
    cin>>phrase;
    stack<char>stack;
    char prev=0;

    for(int i=0; i<phrase.size(); i++){
        if(stack.empty())
            stack.push(phrase[i]);
        else if(stack.top()==phrase[i])
            stack.pop();
    }


    while(stack.size()!=0){
        cout<<stack.top()<<' ';
        stack.pop();
    }
    return 0;
}