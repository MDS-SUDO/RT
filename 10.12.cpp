#include<iostream>
#include<memory>
using namespace std;

class Joint{
    private:
    int id_;
    double angle_;

    public:
    Joint() : id_(0), angle_(0) {}  
    Joint(int id) : id_(id),angle_(0){}
    void set_angle(double a){angle_=a;}
    double get_angle()const{return angle_;}
};

class Robot{
    private:
    unique_ptr<Joint[]>joints_;
    int num_joints_;

    public:
    Robot(int n) :num_joints_(n){
        joints_=make_unique<Joint[]>(n);
        for(int i=0;i<n;i++){
            joints_[i]=Joint(i);
        }
    }
    void set_joint_angle(int id,double angle){
        if(id >= 0 && id<num_joints_)
{
        joints_[id].set_angle(angle);
}    }
    double get_joint_angle(int id){
        if(id >= 0 && id<num_joints_)
{
         return joints_[id].get_angle();
}
 return  -1;
    }


};
int main()
{
    Robot robot(6);
    robot.set_joint_angle(0,45);
    robot.set_joint_angle(1,90);
    cout<<robot.get_joint_angle(0)<<endl;
    cout<<robot.get_joint_angle(1)<<endl;
    return 0;
}