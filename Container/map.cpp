#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    //初始化mapTemp
    map<int,string> mapTemp;
    //给mapTemp进行赋值
    mapTemp.insert(pair<int,string> (5,"张三"));
    mapTemp.insert(pair<int,string> (6,"李四"));
    mapTemp.insert(pair<int,string> (4,"王二麻子"));

    //输出赋值之后的值
    map<int,string>::iterator it;
    for(it=mapTemp.begin();it!=mapTemp.end();it++){
        cout<<"value of:"<<it->first<<" "<<it->second<<" ";
    }
    cout<<endl;

    //根据key值来删除value
    mapTemp.erase(4);

    //查找被删除的值
    it=mapTemp.begin();
    if(it!=mapTemp.end()){
        if(it == mapTemp.find(4)){
            cout<<"find it!The key is:"<<it->first<<" "<<"The value is:"<<it->second<<endl;
        }
        else{
            cout<<"Can't find this key"<<endl;
        }

    }

    //查找一个存在的值
    it=mapTemp.begin();
    if(it!=mapTemp.end()){
        if(it == mapTemp.find(5)){
            cout<<"find it!The key is:"<<it->first<<" "<<"The value is:"<<it->second<<endl;
        }
        else{
            cout<<"Can't find this key"<<endl;
        }

    }

    return 0;
}