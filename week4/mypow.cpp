#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
    int n = exp;
    if(n < 0){
        n = -n;
    }

    for(int i=0 ; i < n; i++ ){
        result = result * base;
    }
    if(exp < 0){
        result = 1/result;
    }

    return result;
}

int main(){

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "2^-3: " << mypow(2, -3) << std::endl;
}