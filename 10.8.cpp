#include<iostream>
using namespace std;

class Robot{
    protected:
    int id_;
    double battery_;

    public:
    Robot(int id): id_(id),battery_(100){}

    virtual void move(){
        cout<<"Robot moving..."<<endl;
    }
    virtual ~Robot(){}

};

class   MobileRobot :public Robot{
    public:
      MobileRobot(int id): Robot(id){}

    void move() override{
        cout <<"Mobilerobot moving wirh arms..."<<endl;

        }
};

class ArmRobot :public Robot{
    public:
    ArmRobot(int id): Robot(id){}

    void move() override{
        cout <<"Armrobot moving wirh arms..."<<endl;

        }
};

int main(){
    Robot* robots[2];
    robots[0] = new MobileRobot(1);
    robots[1] = new ArmRobot(1);

    for(int i=0;i<2;i++)
{
    robots[i]->move();
}
    delete robots[0];
    delete robots[1];

    return 0;
}
