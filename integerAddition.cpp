//
//  integerAddition.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-04.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include <iostream> 
#include "integerAddition.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    int integer1{0};
    int integer2{0};
    int sum{0};
    
    std::cout << "Welcome to C++\n";
    std::cout << "Hello, Welcome to C++\n";
    
    std::cout << "Enter first integer";
    std::cin >> integer1;
    
    std::cout << "Enter second integer";
    std::cin >> integer2;
    
    sum = integer1 + integer2;
        
    std::cout << "The sum of the two integers is: " << sum << std::endl;
    
    return 0;
}
