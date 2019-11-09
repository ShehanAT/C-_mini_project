//
//  basePlusCommisionEmployee.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-09.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include "basePlusCommisionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn, double commision, double rate, double base)
    : CommissionEmployee(first, last, ssn, commision, rate){
    setBaseSalary(base);
}

void BasePlusCommissionEmployee::setBaseSalary(double base){
    if(base < 0.0){
        throw invalid_argument("Base salary cannot be less than $0.00");
    }
    baseSalary = base;
}

double BasePlusCommissionEmployee::getBaseSalary() const{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + (getCommissionRate() + getGrossSales());
}

string BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Base Plus " << CommissionEmployee::toString();
    output << "Base Salary: " << getBaseSalary();
    return output.str();
}
