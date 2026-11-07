#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void translate(const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<std::string>& v3) {
    v3.clear();
    for ( int  i = 0; i < v1.size(); i++) {
        bool found = false;
        for ( int j = 0; j + 1 < v2.size(); j = j + 2) {
            if (v1[i] == v2[j]) {
                v3.push_back(v2[j + 1]);
                found = true;
                break;
            }
        }
        if (!found) {
            v3.push_back(v1[i]);   
        }
    }
}

int main(){
    std::vector<std::string> v1 , v2 , v3;
    std::ifstream phrase , dictionary;
    std::string  tmp ,tep;


    phrase.open("phrase.txt");
    while( phrase >> tmp){
        v1.push_back(tmp);
    }
    phrase.close();

    dictionary.open("dictionary.txt");
    while( dictionary >> tep){
        v2.push_back(tep);
    }
    dictionary.close();

    std::ofstream translation;
    translation.open("translation.txt");
    translate(v1 , v2 , v3);
    for( int k = 0 ; k < v3.size() ; k++){
        translation << v3[k] << " ";
    } 
    translation.close();

}

