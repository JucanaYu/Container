#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> stackTemp;
    for(int i=0;i<5;i++){
        stackTemp.push(i);
    }

    cout<<"stack's size:"<<stackTemp.size();
    cout<<endl;

    while(!stackTemp.empty()){
        cout<<stackTemp.top()<<endl;
        stackTemp.pop();
    }

    return 0;
}