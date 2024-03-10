#include<iostream>
using namespace std;

class Banking{
    private:
        static float interest;
        int principal;
        int time; // in month only 
        // string arr[2];
    public:
        static void getInterestValue(){
            cout<<"Enter the interest value: ";
            cin>>interest;
        }
        void getData(){
            cout<<"Enter the initial principal balance: ";
            cin>>principal;
            cout<<"Enter the time of interest in months: ";
            cin>>time;
        }
        void calculate_SI(){
            // formula SI = (P*R*T)/100*12
            cout<<"Simple Interest is: "<<(principal * interest * time / (100 * 12))<<endl;
        }
};
float Banking::interest = 2;
int main(){
    Banking b1,b2;
    b1.getInterestValue();
    b1.getData();
    b1.calculate_SI();
    b2.getData();
    b2.calculate_SI();
}
