#include <iostream>
int main(){
    int a , b , q = 0;
    std::cin >> a;
    std::cin >> b;
     while(a >= b){
        q = q + 1;
        a = a - b;
    }
std::cout << "quotient is " << q << " remainder is " << a << std::endl;
}

