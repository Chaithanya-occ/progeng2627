#include <iostream>
bool leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int end_m;
    if( m1 == 1 || m1== 3 || m1==5 || m1 ==7 || m1==8 || m1==10 || m1==12){
        end_m = 31;
    }
    else if( m1== 2){
        if(leap_year(y1)){
            end_m = 29;
        }
        else{
            end_m = 28;
        }
    }
    else{
        end_m =30;
    }
    d2 = d1;
    m2 = m1;
    y2 = y1;
    if(d1 < end_m){
        d2 = d1 +1;
    }
    else if( d1 == end_m){
        d2 = 1;
        if( m1 != 12){
            m2 = m1 + 1;
        }
        else{
            m2 = 1;
            y2 = y1 +1;
        }
    }
}
int main(){
    int d , m , y , d2 , m2 , y2;
    std::cin >> d >> m >> y;
    next_date(  d ,  m ,  y , d2 , m2 , y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
}