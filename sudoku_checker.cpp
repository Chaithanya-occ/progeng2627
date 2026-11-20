#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}

int mfind(int n, const std::vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        if(n == v[i]){
            return i;
        }
        
    }
    return -1;
}

bool check_sequence(const std::vector<int>& v){
    for(int k=1; k <= v.size(); k++){
        if(mfind(k,v)== -1){
            return false;
        }
    }
    return true;
}

void get_row(int r, const std::vector<int>& in, std::vector<int>& out){
    // write your code here
    for(int l =0 ; l < std::sqrt(in.size()); l++){
        out.push_back(in[twod_to_oned(r,l,sqrt(in.size()))]);
    }
}

void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    // write your code here
    for(int h =0 ; h < std::sqrt(in.size()); h++){
        out.push_back(in[twod_to_oned(h,c,sqrt(in.size()))]);
    }
}

void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){
    // write your code here
   
    int b = std::sqrt(std::sqrt(in.size()));  

    int r = b * (subs / b);          
    int c = b * (subs / b);            

    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            int idx = twod_to_oned(r + i, c + j, std::sqrt(in.size()));
            out.push_back(in[idx]);
        }
    }
}

bool valid_sudoku(const std::vector<int>& g){
    int side = std::sqrt(g.size()); 
    std::vector<int> seq;

    for(int i = 0; i < side; i++){
        seq.clear();
        get_row(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    for(int i = 0; i < side; i++){
       
        seq.clear();
        get_col(i, g, seq);

        if(!check_sequence(seq)){
            return false;
        }
    }

   for(int i = 0; i < side; i++){
   
        seq.clear();
        get_subsq(i,g,seq);

        if(!check_sequence(seq)){
            return false;
        }
    }

    return true;
}

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "one argument needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> s;

    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout << "error, can't open input file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        s.push_back(tmp);
    }


    int side = std::sqrt(s.size());

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            std::cout << s[twod_to_oned(i, j, side)] << " ";
        }
        std::cout << std::endl;
    }

    bool valid = valid_sudoku(s);

    if(valid){
        std::cout << "valid" << std::endl;
    }
    else{
        std::cout << "not valid" << std::endl; 
    }

}