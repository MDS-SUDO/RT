#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    
    int main(){
        vector<int> v={1,2,3,4,5};
 
        auto square=[](int x){return x*x;};
        cout<<square(5)<<endl;

        vector<pair<string,int>>students={
            {"Alice",90},
            {"Bob",85},
            {"Charlie",95}
            
        };
        sort(students.begin(),students.end(),
            [](const auto& a,const auto& b){
                return a.second>b.second;
            });

            for(auto&[name,score]:students){
                cout<<name<<":"<<score<<endl;
            }
    }