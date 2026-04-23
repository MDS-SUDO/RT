#include<iostream>
using namespace std;

    void increment_value(int x){
    x++;
}
     void increment_reference(int& x){
    x++;
}
    void increment_point(int* x){
    (*x)++;
}
    int main()
    {
        int num=5;
        increment_value(num);
        cout<<num<<endl;
        increment_reference(num);
        cout<<num<<endl;
        increment_point(&num);
        cout<<num<<endl;
        return 0;

    }