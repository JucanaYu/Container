#include<iostream>
#include<vector>
using namespace std;

int main(){
   //����һ��int��Vector��ȡ��Ϊvec
   vector<int> vec;
   int i;
   cout<<endl;

   //�鿴��ʼ״̬��vec�Ĵ�С
   cout<<"vector size ="<<vec.size()<<endl;
   cout<<endl;

   //��vec��ֵ
   for(i=0;i<5;i++){
      //push_back(i)�������ǽ�ֵi���������β��
      vec.push_back(i);
   }
   cout<<endl;

   //size()�������ǲ鿴vec�Ĵ�С
   cout<<"entend vector size:"<<vec.size()<<endl;

   for(i=0;i<5;i++){
      cout<<"value of vec["<<i<<"]:"<<vec[i]<<endl;
   }
   cout<<endl;

   //βɾ
   vec.pop_back();
   int num=vec.size();
   cout<<"delect vector size:"<<num<<endl;

   return 0;
}