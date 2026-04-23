#include<iostream>
#include<queue>
#include<memory>
using namespace std;

class Task{
    public:
    virtual void execute()=0;
    virtual ~Task(){}
};

class MoveTask : public Task{
    private:
    int target_angle_;

    public:
    MoveTask(int angle) :target_angle_(angle){}

    void execute()override{
        cout<<"Moving to angle:"<<target_angle_<<endl;
 }
};

class GripTask: public Task
{
   

    void execute() override{
        cout<<"Gripping object..."<<endl;
    }
};

int main(){
    queue<unique_ptr<Task>> tasks;

    tasks.push(make_unique<MoveTask>(45));
      tasks.push(make_unique<GripTask>());
        tasks.push(make_unique<MoveTask>(0));
        
        while(!tasks.empty()){
            tasks.front()->execute();
            tasks.pop();

        }
    return 0;
}