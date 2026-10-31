#include <iostream>
#include <vector>

int main(){
    std::vector<int>v;
    std::vector<int>k;
    int n ,t ,a;
    std::cout << "enter n" <<std::endl;
    std::cin >> n;
    for(; n > 0; n--){
        std::cout << "enter a" <<std::endl;
        std::cin >> a;
        v.push_back(a);
        
        
    }
    std::cout << "enter t" << std::endl;
    std::cin >> t;
    for(int i = v.size() -1  ; i >= 0; i-- ){
        if( t == v.at(i)){
            k.push_back(i);
        
        }
    }
    std::cout << "there are " << k.size() << " occurrences of " << t << std::endl;

    if( k.size() > 0){
        std::cout << "at the index of:" << std::endl;
        for( int j = k.size() -1; j >= 0; j--){
            std::cout << " " << k.at(j) << std::endl; 
        }

    }
}