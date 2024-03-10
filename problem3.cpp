#include<iostream>
using namespace std;
#include<string>
class Student{
    char name[30];
    int marks[5];
    public:
        void getData(){
            cout<<"Enter your name: ";
            cin.getline(name,30);
            for(int i=0; i<5; i++){
                cout<<"Enter your marks for subject "<<i+1<<": ";
                cin>>marks[i];
            }
        }   
        void calculateGrade(){
            for(int i=0; i<5; i++){
                switch(marks[i]/10){
                    case 10:
                    case 9:  
                        cout<<"Grade for "<<i+1<<" subject is: E"<<endl;
                        break;
                    case 8:
                        cout<<"Grade for "<<i+1<<" subject is: E"<<endl;
                        break;
                    case 7:
                        cout<<"Grade for "<<i+1<<" subject is: A"<<endl;
                        break;
                    case 6:
                        cout<<"Grade for "<<i+1<<" subject is: B"<<endl;
                        break;
                    case 5:
                        cout<<"Grade for "<<i+1<<" subject is: C"<<endl;
                        break;  
                    default:
                        cout<<"Grade for "<<i+1<<" subject is: F"<<endl;
                }

            }
        }
};
int main(){
    Student hello;
    hello.getData();
    hello.calculateGrade();
}