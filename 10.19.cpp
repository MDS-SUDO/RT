#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    struct Joint{
        int id;
        string name;
        double angle;
    };

    int main(){
        vector<Joint> joints={
            {3,"joints3",60},
            {1,"joints1",30},
            {2,"joints2",45}
        };

        sort(joints.begin(),joints.end(),
        [](const Joint& a,const Joint& b){
            return a.angle< b.angle;

        });

        for(auto& j:joints){
            cout<<j.name<<":"<<j.angle<<endl;

        }
        return 0;
          }