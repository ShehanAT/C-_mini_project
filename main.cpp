//
//  main.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-10-30.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "integerAddition.h"
#include "cinInteger.h"
#include "bodyMassIndexCalculator.h"
#include "runner.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Runner runner1("Shehan", 20);
    Runner runner2("Shawn", 21);
    Runner runner3("Sake", 22);
    
    cout << "Runner1's name is: " << runner1.getName() << "\n";
    cout << "Runner1's age is: " << runner1.getAge() << "\n";
    
    cout << "Runner2's name is: " << runner2.getName() << "\n";
    cout << "Runner2's age is: " << runner2.getAge() << "\n";
    
    cout << "Runner3's name is: " << runner3.getName() << "\n";
    cout << "Runner3's age is: " << runner3.getAge() << "\n";
    
    return 0;
}

