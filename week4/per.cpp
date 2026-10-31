#include <iostream>

void per( double l, double w, double& p , double& a ){
    p = (2 * l) + (2 * w);
    a = l * w;
    
}

int main(){
    double length , width, p ,a;
    std::cin >> length >> width;
    per(length,width,p,a);
    std::cout <<  p  << " " << a <<  std::endl;
}