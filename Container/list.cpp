#include<iostream>
#include<list>

using namespace std;

int main(){
    //��ʼ��
    list<char> listTemp;

    //��listTemp��ֵ26����ĸ
    for(char i='a';i<='z';++i){
        listTemp.push_back(i);
    }

    //��listTemp��ֵ��Ĵ�С
    cout<<"listTemp's malloc size:"<<listTemp.size()<<endl;

    //���listTemp��ֵ֮���ֵ
    for(auto a:listTemp){
        cout<<a<<" ";
    }
    cout<<endl;

    //ѭ�����ͷֵ�����ҽ�ͷֵɾ��
    while(!listTemp.empty()){
        cout<<listTemp.front()<<" ";
        listTemp.pop_front();
    }
    cout<<endl;

    //��ɾ��ͷֵ���listTemp�Ĵ�С
    cout<<"listTemp's malloc size:"<<listTemp.size()<<endl;

    return 0;
}