#include <iostream>
#include <cmath>


int main() 
{
    //Asks for the value of a
    std::cout << "a : " << std::endl;
    //Intitializes a
    double a;
    std::cin >> a;
    
    //Asks for the value of b
    std::cout << "b : " << std::endl;
    //Initializes b
    double b;
    std::cin >> b;
    
    //Not sure what's going on here, I would know if you would use comments
    double poW = pow(a,b);
    
    //Conditial statment checking the value of poW
    if(poW > 100000)
    {
        //Prints out that poW is big
        std::cout << poW << " is a big number" << std::endl;
    }
    else
    {
        //Pritns out that poW is not big
        std::cout << poW << " is not a big number" << std::endl;
    }
    
    //Loops through to print the value of poW multiple times
    for(int i = 0; i < 3; i++)
    {
        std::cout << poW(a,b) << std::endl;
    }
	return 0;
}
