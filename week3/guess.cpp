#include <iostream>
#include <cmath>
#include <string>
int main(){
    int lb , ub, mid;
    std::string one;
    std::cout << "input the lowest number and then the highest number" << std::endl;
    std::cin >> lb >> ub;
    mid = std::ceil((lb + ub)/2);

    while(one != "c"){
        std::cout << "is your number h or l than " << mid << std::endl;
        std::cin >> one;
        if(one == "h"){
            lb = mid;
            mid  = std::ceil((lb + ub)/2);
        }
        else if( one == "l"){
            ub = mid;
            mid = std::ceil((lb + ub)/2);

        }

    }
std::cout << "your number is " << mid << std::endl;
        

}