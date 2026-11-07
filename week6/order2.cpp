#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 
int main(){
    std::string inputfilename;
    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;
    std::ifstream infile; 
    infile.open(inputfilename);
    std::vector<int> v;
    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp , n = -1;
    while(infile >> tmp){
        v.push_back(tmp); 
        n = n + 1;
    }
    infile.close(); 
    std::ofstream outfile;
    outfile.open("output.txt");
    if( !outfile.is_open()){
        std::cout << "error" <<std::endl;
        return EXIT_FAILURE;
    }
     for(; n >= 0; n--){
        outfile << v[n] << std::endl;
    }
    outfile.close();
}