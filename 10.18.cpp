#include<iostream>
#include<vector>
#include<map>

using namespace std;

class SensorBuffer{
    private:
    map<string,vector<double>>data_;
    int  max_size_;

    public:
    SensorBuffer(int max_size=100):max_size_(max_size){

    }
    void add_reading(const string&sensor_name,double value){
        if(data_[sensor_name].size() >=max_size_){
            data_[sensor_name].erase(data_[sensor_name].begin());
        }
         data_[sensor_name].push_back(value);    }

         double get_average(const string& sensor_name){
            auto& readings =data_[sensor_name];
            if(readings.empty()) return 0;
            double sum=0;
            for(double v:readings){
                sum+=v;
            }
            return sum/readings.size();

         }
         void display(const string& sensor_name){
            cout<<sensor_name<<":";
            for(double v: data_[sensor_name]){
                cout<<v<<"";

            }
            cout <<endl;
         }
        };
         int main() {
    SensorBuffer buffer;
    
    buffer.add_reading("temperature", 25.5);
    buffer.add_reading("temperature", 26.1);
    buffer.add_reading("humidity", 65.0);
    buffer.add_reading("humidity", 68.5);
    
    buffer.display("temperature");
    cout << "Avg temp: " << buffer.get_average("temperature") << endl;
    
    return 0;
}

