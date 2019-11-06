//
//  employee.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-06.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include "employee.h"
#include <string>

using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn)//Employee constructor
    : firstName(first), lastName(last), socialSecurityNumber(ssn){}

void Employee::setFirstName(const string& first){ firstName = first; }

string Employee::getFirstName() const { return firstName; }

void Employee::setLastName(const string& last){ lastName = last; }

string Employee::getLastName() const { return lastName; }

void Employee::setSocialSecurityNumber(const string& ssn){ socialSecurityNumber = ssn; }

string Employee::getSocialSecurityNumber() const { return socialSecurityNumber; }

string Employee::toString() const {
    return "First Name: " + getFirstName() + "\nLast Name: " + getLastName() + "\nSocial Security Number: " + getSocialSecurityNumber();
}
//no validation for earnings() because it is a pure abstract function()
