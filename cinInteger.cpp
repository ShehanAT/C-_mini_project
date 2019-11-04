//
//  cinInteger.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-04.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include "cinInteger.h"
#include <iostream>
using namespace std;

int cinInteger(){
    char a{NULL};
    char b{NULL};
    char c{NULL};
    char d{NULL};
    char e{NULL};
    
    cin >> a >> b >> c >> d >> e;
    cout << "integer of A: " << static_cast<int>(a) << "\n";
    cout << "integer of B: " << static_cast<int>(b) << "\n";
    cout << "integer of C: " << static_cast<int>(c) << "\n";
    cout << "integer of D: " << static_cast<int>(d) << "\n";
    cout << "integer of E: " << static_cast<int>(e) << "\n";
    
    return 0;
}
