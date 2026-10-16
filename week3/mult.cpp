#include <iostream>
int main(){
    int n , c=1;
    std::cin >> n;
    for(int j=1; j < n +1; j++){

        for(int i=1; i < n + 1; i++ ){
            std::cout << c * i << "\t";
               
        }
        c++;
        std::cout << std::endl;
    }
}