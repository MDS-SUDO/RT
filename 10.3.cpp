#include<iostream>
using namespace std;
int main()
{
        int x=10;
        int* ptr=&x;

        cout<<*ptr<<endl;
        cout<<ptr<<endl;

        *ptr =20;
        cout<<x<<endl;

        int** ptr2=&ptr;
        cout<<**ptr2<<endl;

        int*null_ptr =nullptr;
        return 0;

}