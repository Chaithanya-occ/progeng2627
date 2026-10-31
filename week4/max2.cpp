#include <iostream>

double compare(double in_1, double in_2, double in_3){
    double big;
    if((in_1 > in_2) && (in_1 > in_3)){
        big = in_1;
    }
    else if((in_2 > in_1) && (in_2 > in_3)){
        big = in_2;
    }
    else if((in_3 > in_1) && (in_3 > in_2)){
        big = in_3;
    }
    else{
        big = in_1;
    }
    return big;


}

int main(){
    double num1 , num2 , num3;
    std::cin >> num1 >> num2 >> num3;
    std::cout << compare(num1 , num2 , num3) << std::endl;
}