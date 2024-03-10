#include<iostream>

class Box{
    private:
        int length;
        int width;
    public:
        void getDimensions();
        void showDimensions();
};
void Box::getDimensions(){
    std::cout<<"Enter the length of the box: ";
    std::cin>>length;
    std::cout<<"Enter the width of the box: ";
    std::cin>>width;
}
void Box::showDimensions(){
    std::cout<<"Length: "<<length<<std::endl<<"Breath: "<<width<<std::endl;
}
int main(){
    Box box_1,box_2,box_n;
    // taking input
        box_1.getDimensions();
        box_2.getDimensions();
        box_n.getDimensions();
    // printing output
    box_1.showDimensions();
    box_2.showDimensions();
    box_n.showDimensions();
}
