#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0 ; i < vin.size(); i++ ){
        if( s == vin[i]){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    vout.clear();
    for(int j = 0; j < vin1.size() ; j++){
       
        if(search_vector( vin1[j] , vout) == -1 ){
            vout.push_back(vin1[j]);
        }
    }
    for(int j = 0; j < vin2.size() ; j++){
        
        if(search_vector( vin2[j] , vout) == -1 ){
            vout.push_back(vin2[j]);
        }
    }
}


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int k = 0; k < vin1.size() ; k++){
        
        if((search_vector( vin1[k] , vin2) != -1 ) && (search_vector( vin1[k] , vout) == -1)){

            vout.push_back(vin1[k]);
        }
    }
}


int main(){
    std::ifstream t1 , t2;
    t1.open("warehouse1.txt");
    std::vector<std::string> v1 , v2 , v_u , v_i;
    if(!t1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while( t1 >> tmp){
        v1.push_back(tmp);
    }
    t1.close();


     t2.open("warehouse2.txt");
    if(!t2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tep;
    while( t2 >> tep){
        v2.push_back(tep);
    }

    t2.close();

    std::ofstream unio , inter;
    unio.open("union.txt");
    if(!unio.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    union_vector(v1 ,v2 ,v_u);
    for( int m = 0 ; m < v_u.size() ; m++  ){
        unio << v_u[m] << std::endl;
    }
    unio.close();

    inter.open("intersection.txt");
    if(!inter.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    intersection_vector(v1 ,v2 , v_i);
    for(int n = 0; n < v_i.size(); n++){
        inter << v_i[n] << std::endl;
    }
    inter.close();

}