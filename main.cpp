//
//  main.cpp
//  testing1
//
//  Created by Shehan Atuk on 2019-10-30.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
//#include "integerAddition.h"
//#include "cinInteger.h"
//#include "bodyMassIndexCalculator.h"
//#include "runner.h"
#include "employee.h"
#include "salariedEmployee.h"
#include "commisionEmployee.h"
#include "basePlusCommisionEmployee.h"

using namespace std;

void virtualEmployeesViaPointer(const Employee* const employeePtr);//calling by pointer
void virtualEmployeesViaReference(const Employee& employeeRef);//calling by reference


int main(int argc, const char * argv[]) {
    cout << fixed << setprecision(2); // setting precision for floating point numbers
    
    SalariedEmployee employee1{"Shehan", "Atuk", "560-395-766", 5.00};
    
    CommissionEmployee employee2{"Sue", "Jones", "452-192-623", 0.94, 2.34};
    
    BasePlusCommissionEmployee employee3{"Boaz", "Job", "439-345-923", 0.88, 3.45, 20.00};
    
    cout << "Employees processed through static binding:";
    cout << employee1.toString();
    cout << "Earned: " << employee1.earnings();
    cout << "\n\n";
    cout << employee2.toString();
    cout << "Earned: " << employee2.earnings();
    cout << "\n\n";
    cout << employee3.toString() << "\n";
    cout << "Earned: " << employee3.earnings() << "\n";
    cout << "\n";
    vector<Employee *> employees{&employee1, &employee2, &employee3};
    //array of pointers
    
    cout << "Employees proceeded through polymorphic binding\n";
    cout << "Virtual Function Calls Made Off Base Class Pointers\n";
    
    for(const Employee* employeePtr : employees){
        virtualEmployeesViaPointer(employeePtr); // passing pointer
    }
    
    cout << "\nEmployees proceeded through polymorphic binding\n";
    cout << "Virtual Function Calls Made Off Base Class References\n";

    for(const Employee* employeePtr : employees){
        virtualEmployeesViaReference(*employeePtr);//passing dereferenced pointer i.e reference
    }
    return 0;
}

void virtualEmployeesViaPointer(const Employee* const employeePtr){//calling by pointer
    cout << employeePtr->toString();
    cout << "\nEarned: " << employeePtr->earnings() << "\n";
}

void virtualEmployeesViaReference(const Employee& employeeRef){//calling by reference
    cout << employeeRef.toString();
    cout << "\nEarned: " << employeeRef.earnings() << "\n";
}

