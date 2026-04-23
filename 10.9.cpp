#include<iostream>
#include<memory>
using namespace std;

class Resource{
    public:
    Resource(){cout<<"Resource allocated"<<endl;}
    ~Resource(){cout<<"Resource freed"<<endl;}
};

int main(){
    //unique_ptr:
    {
        unique_ptr<Resource>ptr1(new Resource());
        unique_ptr<Resource>ptr2=move(ptr1);

    }
   //share_ptr:
   {
    shared_ptr<Resource>ptr3=make_shared<Resource>();
    shared_ptr<Resource>ptr4=ptr3;

    cout<<"Reference count :" <<ptr3.use_count()<<endl;

    return 0;
    

    }

}