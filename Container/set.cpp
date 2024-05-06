#include<iostream>
#include<set>

using namespace std;

int main(){
    //初始化setTemp
    set<int> setTemp;

    //向setTemp插入数值
    setTemp.insert(1);
    setTemp.insert(2);
    setTemp.insert(1);
    setTemp.insert(3);

    //检查setTemp的大小
    cout<<"setTemp's malloc size:"<<setTemp.size()<<endl;

    //输出setTemp里面的数值
    for(auto i:setTemp){
        cout<<i<<" ";
    }
    return 0;
}