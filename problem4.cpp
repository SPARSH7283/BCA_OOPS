#include<iostream>
using namespace std;
#include<string>
class Mapping{
    int numeric[5];
    string mapping[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string convertedValues[5];
    public:
        void getData(){
            cout<<"Enter the numeric values from 0-9"<<endl;
            for(int i=0; i<5; i++){
                cout<<"Enter "<<i+1<<" value: ";
                cin>>numeric[i]; 
                convertedValues[i].append(mapping[numeric[i]]);
            }
        }
        void displayData(){
            for(int i=0; i<5; i++){
                cout<<convertedValues[i]<<endl;
            }
        }
};
int main(){
    Mapping obj;
    obj.getData();
    obj.displayData();
}
