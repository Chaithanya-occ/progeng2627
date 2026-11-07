#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void compare_textv(const std::vector<std::string>& v1 , const std::vector<std::string>& v2 , int& element, int& counter  ){
    int i = 0;
    int c = 0;

    while( i < v1.size()){
        if(v1[i]  == v2[element]){
            c ++ ;
        }
        i++;
    }
    counter = c;
}

int main(){
    std::vector<std::string> v_t , v_w ;
    std::ifstream text , words;
    text.open("text.txt");
    std::string tmp;
    while(text >> tmp){
        v_t.push_back(tmp);
    }
    text.close();
    words.open("words.txt");
    std::string tep;
    while(words >> tep){
        v_w.push_back(tep);
    }
    words.close();

    // converting text file info into vectors

    std::ofstream occurence;
    int count;
    occurence.open("occurence.txt");
    for(int e = 0; e < v_w.size() ; e++ ){
        compare_textv(v_t , v_w , e , count);
        occurence << v_w[e] << ":" << count << std::endl;

    }
    occurence.close();

    
}