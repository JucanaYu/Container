#include<iostream>
#include<set>

using namespace std;

int main(){
    //��ʼ��setTemp
    set<int> setTemp;

    //��setTemp������ֵ
    setTemp.insert(1);
    setTemp.insert(2);
    setTemp.insert(1);
    setTemp.insert(3);

    //���setTemp�Ĵ�С
    cout<<"setTemp's malloc size:"<<setTemp.size()<<endl;

    //���setTemp�������ֵ
    for(auto i:setTemp){
        cout<<i<<" ";
    }
    return 0;
}