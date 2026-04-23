#include<iostream>
#include<vector>
using namespace std;
    class Motor{
        private:
        int id_;
        double spend_;
        vector<double>history_;

        public:
         Motor(int id): id_(id),spend_(0){
            cout<<"Motor"<<id_<<"created"<<endl;
         }
        
                
         ~Motor(){
            cout<<"Motor"<<id_<<"destroyed"<<endl;

         }
         void set_spend(double s){
            spend_=s;
            history_.push_back(s);
        }

        double get_spend() const{
            return spend_;

        }
        double get_average_spend()const{
            if(history_.empty())
            return 0;
            double sum=0;
            for(double s:history_){
                sum +=s;
            }return sum/history_.size();
        
        
        }


        };
        int main(){
        Motor m1(1);
        m1.set_spend(100);
        m1.set_spend(110);
        m1.set_spend(105);
        cout<<"current spend"<<m1.get_spend()<<endl;
        cout<<"average spend"<<m1.get_average_spend()<<endl;

        return 0;
        

        }
        


        
        
        
        
        
        
        