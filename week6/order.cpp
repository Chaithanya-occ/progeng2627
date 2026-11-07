#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int  n = -1;
    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        n = n + 1;
    }
    infile.close(); 

    // TODO: print the content of v in reversed order
    for(; n >= 0; n--){
        std::cout << v[n] << std::endl;
    }

}