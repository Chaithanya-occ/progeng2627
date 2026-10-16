#include <iostream>
int main(){
    int n , s=0 , max ;
    std::cin >> n;
    max = n;
    while(n != 1){
        s++;
        if(n % 2 ==0){
            n = n/2;
            if(n > max){
                max = n;
            }
        }
        else{
            n= 3*n +1;
            if(n > max){
                max = n;
            }
        }
        std::cout << n << std::endl;
    }
std::cout << "number of steps is " << s << "max term is " << max <<std::endl;
}