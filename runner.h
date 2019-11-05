//
//  runner.hpp
//  testing1
//
//  Created by Shehan Atuk on 2019-11-04.
//  Copyright © 2019 Shehan Atuk. All rights reserved.
//

#ifndef runner_h
#define runner_h

#include <stdio.h>
#include <iostream>
#include <string>

class Runner{
public:
    Runner(std::string runnerName, int runnerAge){
        name = runnerName;
        age = runnerAge;
    }
    
    void setName(std::string runnerName){
        name = runnerName;
    }
    void setAge(int runnerAge){
        age = runnerAge;
    }
    
    std::string getName() const{
        return name;
    }
    
    int getAge(){
        return age;
    }
private:
    std::string name;
    int age;
};
#endif /* runner_h */
