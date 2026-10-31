#include <iostream>
#include <cmath>

int main(){
    double x , n, sum=0;
    std::cin >> x >> n;
    for(; n > 0; n-- ){
        sum = sum + std::pow(x,n);

    }
    std::cout << sum << std::endl;
    
  
}