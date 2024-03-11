#ifndef find_calculation_h
#define find_calculation_h

namespace mathFunctions{
    double calculateSquareRoot(double x){
    double s= 0;
    double e = x;
    double mid = s + (e-s)/2;
    double ans = -1;
    while(s<=e){
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid>=x){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
    double calculateCube(double x){
        return x*x*x;
    }
    double findPow(double n1,double n2){
        double x=n1;
        for(double i=1; i<n2; i++){
            x*=n1;
        }
        return x;
    }
    }

#endif
