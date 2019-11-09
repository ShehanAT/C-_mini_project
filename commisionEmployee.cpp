//
//  commisionEmployee.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-09.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include "commisionEmployee.h"
#include <stdio.h>
#include <iomanip> // fixed << setprecision
#include <sstream> // for ostringstream


using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double commision, double sales)
    : Employee(first, last, ssn){
        setGrossSales(sales);
        setCommissionRate(commision);
    }

void CommissionEmployee::setGrossSales(double sales){
    if(sales < 0.0){
        throw invalid_argument("Gross sales cannot be <= 0.0");
    }
    grossSales = sales;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double commision){
    if(commision > 1.0 || commision <= 0.0){
        throw invalid_argument("Commision rate must be between 0.0 and 1.0");
    }
    commisionRate = commision;
}

double CommissionEmployee::getCommissionRate() const {
    return commisionRate;
}

double CommissionEmployee::earnings() const {
    return getCommissionRate() * getGrossSales();
}

string CommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Commissioned Employee: ";
    output << Employee::toString() << "\n";
    output << "Commission Rate: " << getCommissionRate();
    output << "Gross Sales: " << getGrossSales();
    return output.str();
}

