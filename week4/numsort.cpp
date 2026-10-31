#include <iostream>

void myswap(double& n1, double& n2) {
    double tmp = n1;
    n1 = n2;
    n2 = tmp;
}

// Sorts in descending order (largest in s1)
void sort_three_numbers(double& s1, double& s2, double& s3) {
    if (s1 < s2) myswap(s1, s2);
    if (s2 < s3) myswap(s2, s3);
    if (s1 < s2) myswap(s1, s2);
}

int main() {
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}