//
//  commisionEmployee.hpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-09.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#ifndef commisionEmployee_h
#define commisionEmployee_h

#include <stdio.h>
#include <iomanip>
#include <sstream>
#include "employee.h"

using namespace std;

class CommissionEmployee : public Employee{
public:
    CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
    virtual ~CommissionEmployee() = default; //virtual destructor

    void setCommissionRate(double);
    double getCommissionRate() const;
    
    void setGrossSales(double);
    double getGrossSales() const;
    
    //keyword virtual signals intent to override
    virtual double earnings() const override;
    virtual string toString() const override;
    
private:
    double grossSales;
    double commisionRate;
};

#endif /* commisionEmployee_h */


