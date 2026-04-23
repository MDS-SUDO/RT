#include<iostream>
using namespace std;
    int main(){
        int* ptr=new int;
        *ptr=42;
        cout<<*ptr<<endl;
        delete ptr;
        ptr=nullptr;

        int* arr=new int[10];
        arr[0]=5;
        delete[]arr;

        struct point{
            int x,y;
        };
        point *p=new point;
        p->x=10;
        p->y=20;
        delete p;
        return 0;


    }