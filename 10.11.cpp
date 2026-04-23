#include<iostream>
using namespace std;
int main(){
    int arr[3]={10,20,30};

    int* ptr=arr;
    cout<< *(ptr+1)<<endl;
    for(int i=0;i<3;i++){
        cout<<*(ptr+i)<<"";

    }
    cout <<endl;
    return 0;
    
}