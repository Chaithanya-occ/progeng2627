#include <iostream>
#include <vector>
void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    
    for( int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for( int j = 0 ; j < vin2.size(); j++){
        vout.push_back(vin2[j]);
    }
}

int main(){
    std::vector<int> v1{1,2,3,4};
    std::vector<int> v2{5,6,7,8};
    std::vector<int> v3;
    append_vectors(v1,v2,v3);
    for( int k = 0; k < v3.size() ; k++){
        std::cout << " " << v3[k];
    }
}