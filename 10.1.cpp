#include<iostream>
using namespace std;

    int main()
{
    int age=25;
    double height =1.75;
    string name ="Robot";
    bool is_moving =true;

    if(age>18){
        cout<<"Adult"<<endl;

    }else{
        cout<<"Mintor"<<endl;

    }

    for(int i=0;i<5;i++)
    {
        cout<<i<<" "<<endl;
    }

    int count=0;
    while(count<3){
        cout<<count<<endl;
        count++;
    }
        int status;
    switch(status){
        case 1:
            cout<<"Running"<<endl;
            break;
        case 0:
            cout<<"Stopped"<<endl;
            break;
        default:
            cout<<"Unknown"<<endl;
    }
}