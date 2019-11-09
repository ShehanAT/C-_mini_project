//
//  salariedEmployee.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-06.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include "salariedEmployee.h"
#include <iomanip> // for fixed << setprecision()
#include <sstream> // for ostringstream

using namespace std;

SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, double salary)
    :Employee(first, last, ssn)
{
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary){
    if(salary < 0.0){
        throw invalid_argument("Salary must be >= $0.00");
    }
    weeklySalary = salary;
}

double SalariedEmployee::getWeeklySalary()const { return weeklySalary; }

double SalariedEmployee::earnings() const { return getWeeklySalary(); }

string SalariedEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "\nSalaried Employee\n";
    output << Employee::toString() << "\n";
    output << "Weekly Salary: " << getWeeklySalary() << "\n";
    return output.str();
}
