#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    //��ʼ��mapTemp
    map<int,string> mapTemp;
    //��mapTemp���и�ֵ
    mapTemp.insert(pair<int,string> (5,"����"));
    mapTemp.insert(pair<int,string> (6,"����"));
    mapTemp.insert(pair<int,string> (4,"��������"));

    //�����ֵ֮���ֵ
    map<int,string>::iterator it;
    for(it=mapTemp.begin();it!=mapTemp.end();it++){
        cout<<"value of:"<<it->first<<" "<<it->second<<" ";
    }
    cout<<endl;

    //����keyֵ��ɾ��value
    mapTemp.erase(4);

    //���ұ�ɾ����ֵ
    it=mapTemp.begin();
    if(it!=mapTemp.end()){
        if(it == mapTemp.find(4)){
            cout<<"find it!The key is:"<<it->first<<" "<<"The value is:"<<it->second<<endl;
        }
        else{
            cout<<"Can't find this key"<<endl;
        }

    }

    //����һ�����ڵ�ֵ
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