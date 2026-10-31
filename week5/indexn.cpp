#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin){
    
    if( vin.size() == 0){
        return -1;
    }
    for(int i = 0; i < vin.size() ; i++){
        if( n == vin[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int x;
    std::vector<int> k{2,4,6,8};
    std::cout << "enter element to be found:" <<std::endl;
    std::cin >> x;
    std::cout << search_vector(x,k) << std::endl;

}