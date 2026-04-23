#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;

}
int subtract(int a,int b){
    return a-b;
}
int compute(int a,int b,int(*func)(int ,int)){
    return func(a,b);
}
int main()
{
    int (*func_ptr)(int,int)=add;

    cout<<func_ptr(3,4)<<endl;

     func_ptr=subtract;
    cout<<func_ptr(10,3)<<endl;

    cout<<compute(5,3,add)<<endl;
    cout<<compute(5,3,subtract)<<endl;
    return 0;
}