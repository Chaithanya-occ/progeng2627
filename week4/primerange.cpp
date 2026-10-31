#include <iostream>
int smallest_factor(int n){
    
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            return cf;
            
        }
    }
    return n;
}
int main(){
    int x ,y;
    std::cin >> x >> y;
    for( int i = x +1; i < y; i++){
        if(smallest_factor(i) == i){
            std::cout << i << std::endl;
        }
    }
} 