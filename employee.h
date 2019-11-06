//
//  employee.hpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-06.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#ifndef employee_h
#define employee_h
#include <string>
#include <stdio.h>

class Employee{
public:
    Employee(const std::string&, const std::string&, const std::string&);
    virtual ~Employee() = default;// compiler generates virtual destructor
    void setFirstName(const std::string&); // set first name
    std::string getFirstName() const; // get first name
    
    void setLastName(const std::string&); //set last name
    std::string getLastName() const; // get last name
    
    void setSocialSecurityNumber(const std::string&); //set SSN
    std::string getSocialSecurityNumber() const; // get SSN
    
    virtual double earnings() const = 0; // pure virtual function
    virtual std::string toString() const; // just virtual function
 
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
};
#endif /* employee_h */
