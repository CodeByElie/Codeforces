#include <iostream>
#include <cmath>

int main() {

    long double n,m,a;
    std::cin >> n >> m >> a;
    std::cout.precision(30);


    std::cout << ceil(m/a)*ceil(n/a) << std::endl;
    
    return 0;
}