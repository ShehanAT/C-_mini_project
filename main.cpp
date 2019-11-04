//
//  main.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-10-30.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include <iostream>
#include "integerAddition.h"
#include "cinInteger.h"
#include "bodyMassIndexCalculator.h"
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Your BMI is: " << setprecision(4) << fixed << BMICalculator() << "\n";
    return 0;
}

