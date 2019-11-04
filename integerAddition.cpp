//
//  integerAddition.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-04.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//
//

#include <iostream>



using namespace std;

int integerAddition() {
    // insert code here...
    int integer1{0};
    int integer2{0};
    int sum{0};

    cout << "Welcome to C++\n";
    cout << "Hello, Welcome to C++\n";
    
    cout << "Enter first integer";
    cin >> integer1;

    cout << "Enter second integer";
    cin >> integer2;

    sum = integer1 + integer2;

    cout << "The sum of the two integers is: " << sum << endl;

    return 0;
}
