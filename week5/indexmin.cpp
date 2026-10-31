#include <iostream>
#include <vector>
double search_vector(const std::vector<double>& vin){
    if( vin.size() == 0){
        return -1;
    }
    double s = vin[0];
    for(int i = 0; i < vin.size() ; i++){
        if( s > vin[i]){
          s = vin[i];
        }
    }
    return s;
}

int main(){
    std::vector<double> v{2,4,6,8};
    std::cout << search_vector(v) << std::endl;
    v = {2,4,-1,8};
    std::cout << search_vector(v) << std::endl;
    v = {};
    std::cout << search_vector(v) << std::endl;

}