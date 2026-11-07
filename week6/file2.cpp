#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    if(infile.is_open()){ 
        int tmp , a = 0;

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            a = a + 1;
        }

        infile.close(); 
        std::cout << a << std::endl;

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}