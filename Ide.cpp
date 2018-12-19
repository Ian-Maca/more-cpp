#include <iostream>
#include <cmath>


int main() {
    std::cout << "a : " << std::endl;
    double a;
    std::cin >> a;
    
    std::cout << "b : " << std::endl;
    double b;
    std::cin >> b;
    
    double poW = pow(a,b);
    
    
    if(poW > 100000){
        std::cout << poW << " is a big number" << std::endl;
    }
    else{
        std::cout << poW << " is not a big number" << std::endl;
    }
    
    for(int i = 0; i < 3; i++){
        std::cout << pow(a,b) << std::endl;
    }
	return 0;
}
