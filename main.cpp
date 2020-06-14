//
//  main.cpp
//  Created by Grant on 2020/6/14.
//  Copyright © 2020 Grant. All rights reserved.
//

#include <iostream>
#include "array.hpp"
#include "stirng.hpp"
#include "pointer.hpp"
#include "refer.hpp"
#include "object.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    std::cout << "Main func:" << std::endl;
    
    arrayDescription();
    stringDesc();
    pointreDesc();
    referDesc();
    Object::Person person("Grant", 29);
    cout << "Name:" << person.getName() << ", Age:" << person.getAge() << endl;

    return 0;
}
