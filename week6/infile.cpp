#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::ifstream infile; 
    std::string fname;
    std::cout << "enter filename" <<std::endl;
    std::cin >> fname;
    infile.open(fname);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message

    }

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}