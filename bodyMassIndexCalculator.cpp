//
//  bodyMassIndexCalculator.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-04.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include "bodyMassIndexCalculator.h"
#include <iostream>

using namespace std;

double BMICalculator(){
    int weightInPounds;
    int heightInInches;
    double BMI{0};
    
    cout << "Enter your weight in pounds: \n";
    cin >> weightInPounds;
    
    cout << "Enter your height in inches: \n";
    cin >> heightInInches;
    
    BMI = (weightInPounds * 703)/(double)(heightInInches * heightInInches);
    return BMI;
}
