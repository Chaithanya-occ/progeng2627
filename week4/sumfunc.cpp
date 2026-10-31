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
    double x, sum=0;
    int n;
    std::cin >> x >> n;
    for(; n > 0; n-- ){
        sum= sum + mypow(x,n);
    
    }

    std::cout << sum << std::endl;
}