#include<iostream>
#include<list>

using namespace std;

int main(){
    //初始化
    list<char> listTemp;

    //给listTemp赋值26个字母
    for(char i='a';i<='z';++i){
        listTemp.push_back(i);
    }

    //看listTemp赋值后的大小
    cout<<"listTemp's malloc size:"<<listTemp.size()<<endl;

    //输出listTemp赋值之后的值
    for(auto a:listTemp){
        cout<<a<<" ";
    }
    cout<<endl;

    //循环输出头值，并且将头值删除
    while(!listTemp.empty()){
        cout<<listTemp.front()<<" ";
        listTemp.pop_front();
    }
    cout<<endl;

    //看删除头值后的listTemp的大小
    cout<<"listTemp's malloc size:"<<listTemp.size()<<endl;

    return 0;
}