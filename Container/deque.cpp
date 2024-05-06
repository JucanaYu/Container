#include<iostream>
#include<deque>
using namespace std;

int main(){
    //��ʼ��
    deque<int> d1;
    
    //deque��ֵ
    for(int i=0;i<5;i++){
        d1.push_back(i);
    }
    cout<<endl;

    //��ֵ֮���˫�˶��д�С
    cout<<"size of origin:"<<d1.size()<<endl;
    cout<<endl;

    //�����ֵ֮���˫�˶���
    for(int i=0;i<5;i++){
        cout<<"value of d1["<<i<<"]:"<<d1[i]<<endl;
    }
    cout<<endl;
    //�ֱ�ͷɾ��һ��βɾ��һ��
    d1.pop_back();
    d1.pop_front();

    //ɾ��֮���˫�˶��д�С
    cout<<"size of after:"<<d1.size()<<endl;
    cout<<endl;

    //���ɾ��֮���˫�˶���
    for(auto i:d1){
        cout<<"value of d1["<<i<<"]:"<<i<<endl;
    }
    cout<<endl;

    return 0;
}