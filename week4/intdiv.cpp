#include <iostream>

void intdiv(int a , int b, int& q , int& r){
    
    q = a /b;
    r = a % b;
}

int main(){
    int x ,y , q , r;
    std::cin >> x >> y;
    intdiv(x, y, q ,r);
    std::cout << q << " " << r << std::endl;
}