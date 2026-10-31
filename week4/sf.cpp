#include <iostream>
int smallest_factor(int n){
    int found_factor;
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            found_factor = cf;
        }

    }
    return found_factor;
}

int main(){
    int n;
    std::cin >> n;
    std::cout << smallest_factor(n) << std::endl;
}