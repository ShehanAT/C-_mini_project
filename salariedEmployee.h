//
//  salariedEmployee.hpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-06.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#ifndef salariedEmployee_h
#define salariedEmployee_h

#include <stdio.h>
#include <string.h>
#include "employee.h"
using namespace std;

class SalariedEmployee : public Employee{
public:
    SalariedEmployee(const string&, const string&, const string&, double = 0.0);
    virtual ~SalariedEmployee() = default; //virtual destructor
    //setter and getter for weekly salary
    void setWeeklySalary(double);
    double getWeeklySalary() const;
    
    //keyword virtual signals intent to override
    virtual double earnings() const override;
    virtual string toString() const override;
    
    
private:
    double weeklySalary;
    
};
#endif /* salariedEmployee_h */
