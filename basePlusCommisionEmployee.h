//
//  basePlusCommisionEmployee.hpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-09.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#ifndef basePlusCommisionEmployee_h
#define basePlusCommisionEmployee_h

#include <stdio.h>
#include "commisionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
    BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
    virtual ~BasePlusCommissionEmployee() = default; //virtual destructor
    
    void setBaseSalary(double);
    double getBaseSalary() const;
    
    //keyword virtual signals intent to override
    virtual double earnings() const override;
    virtual string toString() const override;
    
private:
    double baseSalary;
};

#endif /* basePlusCommisionEmployee_h */
