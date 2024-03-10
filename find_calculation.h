#ifndef find_calculation_h
#define find_calculation_h

namespace mathFunctions{
    double calculateSquareRoot(double x){
        return x*x;
    }
    double calculateCube(double x){
        return x*x*x;
    }
    double findPow(double n1,double n2){
        double x=n1;
        for(int i=1; i<n2; i++){
            x*=n1;
        }
        return x;
    }
    }

#endif
