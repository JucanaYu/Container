#include<iostream>
#include<vector>
using namespace std;

int main(){
   //创建一个int型Vector，取名为vec
   vector<int> vec;
   int i;
   cout<<endl;

   //查看初始状态的vec的大小
   cout<<"vector size ="<<vec.size()<<endl;
   cout<<endl;

   //给vec赋值
   for(i=0;i<5;i++){
      //push_back(i)的作用是将值i插入数组的尾部
      vec.push_back(i);
   }
   cout<<endl;

   //size()的作用是查看vec的大小
   cout<<"entend vector size:"<<vec.size()<<endl;

   for(i=0;i<5;i++){
      cout<<"value of vec["<<i<<"]:"<<vec[i]<<endl;
   }
   cout<<endl;

   //尾删
   vec.pop_back();
   int num=vec.size();
   cout<<"delect vector size:"<<num<<endl;

   return 0;
}