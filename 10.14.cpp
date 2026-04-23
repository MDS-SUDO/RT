#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={5,2,8,4,6};

    for(auto it=v.begin();it !=v.end(); ++it){
        cout<<*it<<"";

    }
    cout<<endl;

    auto it=find(v.begin(),v.end(),8);
    if(it!=v.end()){
        cout<<"Found 8 at psstion"<<(it- v.begin())<<endl;

    }
    sort(v.begin(),v.end());
    for(int x: v){
        cout<<x<<"";
    }

    sort(v.begin(),v.end(),greater<int>());
    for(int x: v){
        cout<<x<<"";
        
    }


}