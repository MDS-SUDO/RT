#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
    v.push_back(4);
    v.pop_back();
    cout<<v[0]<<endl;

    map<string ,int> m;
    m["joint1"]=30;
    m["joint2"]=45;
    for(auto& [key,value]:m){
        cout<<key<<" :"<<value<<endl;
    }

    set<int>s={3,1,4,1,5};
    for(int x:s){
        cout<<x<<"";
    }
    queue<int> q;
    q.push(1);
    q.push(2);
    cout<<q.front()<<endl;
    q.pop ();
    
    stack<int> st;
    st.push(1);
    st.push(2);
    cout<<st.top()<<endl;
    st.pop();

    return 0;


    

}

