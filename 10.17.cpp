#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="robot_control";

    cout<<s.length()<<endl;
    cout<<s[0]<<endl;
    cout<<s.substr(0,5)<<endl;

    size_t pos=s.find("control");
    if(pos !=string::npos){
        cout<<"Found at position"<<pos<<endl;
    }

    s.replace(6,7,"motor");
    cout<<s<<endl;

    //分割字符串
    string str="joint1,joint2,joint3";
    vector<string>parts;
    size_t start=0;
    while ((pos =str.find(',',start))!=string::npos){
        parts.push_back(str.substr(start,pos -start));
        start=pos +1;

    }
    parts.push_back(str.substr(start));

    for(auto& part:parts){
        cout<<part<<"";

    }
    return 0;
}
