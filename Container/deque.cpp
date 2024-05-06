#include<iostream>
#include<deque>
using namespace std;

int main(){
    //初始化
    deque<int> d1;
    
    //deque赋值
    for(int i=0;i<5;i++){
        d1.push_back(i);
    }
    cout<<endl;

    //赋值之后的双端队列大小
    cout<<"size of origin:"<<d1.size()<<endl;
    cout<<endl;

    //输出赋值之后的双端队列
    for(int i=0;i<5;i++){
        cout<<"value of d1["<<i<<"]:"<<d1[i]<<endl;
    }
    cout<<endl;
    //分别头删除一个尾删除一个
    d1.pop_back();
    d1.pop_front();

    //删除之后的双端队列大小
    cout<<"size of after:"<<d1.size()<<endl;
    cout<<endl;

    //输出删除之后的双端队列
    for(auto i:d1){
        cout<<"value of d1["<<i<<"]:"<<i<<endl;
    }
    cout<<endl;

    return 0;
}