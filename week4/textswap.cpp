#include <iostream>
#include <string>
void textswap(std::string & a, std::string & b){
    std::string c = a;
    a = b;
    b = c;

}

int main(){
    std::string a , b;
    std::cin >> a >> b;
    textswap(a,b);
    std::cout << a << " " << b << std::endl;
    
}