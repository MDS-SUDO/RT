#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v={64,34,25,1,5,11,90};

    sort(v.begin(),v.end());
    for(int x:v)cout<<x<<" ";//排序
    cout<<endl;

    //二分查找（要求数组已排序）
    bool found=binary_search(v.begin(),v.end(),25);
    cout<<(found ? "Found" : "Not found")<<endl;

        //找一个大于等于某个之的位置
    auto it=lower_bound(v.begin(),v.end(),30);
    cout<<"First element >=30 is"<<*it<<endl;

    int count=0;
    for(int x:v){
        if(x>25) count++;

    }
    cout<<"Elements>25"<<count<<endl;
    

}
