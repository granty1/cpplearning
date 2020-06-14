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
    // insert code here...
    std::cout << "Main func:" << std::endl;
    
    arrayDescription();
    stringDesc();
    pointreDesc();
    referDesc();
    
    return 0;
}
