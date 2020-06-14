//
//  array.cpp
//  cpplearning
//
//  Created by Grant on 2020/6/14.
//  Copyright © 2020 Grant. All rights reserved.
//

#include "array.hpp"
#include <iostream>
using namespace std;

void arrayDescription() {
    cout << "Arry:" << endl;
    double balance[] = {10.1, 10.2 ,10.3 ,10.4};
    for (auto & item : balance) {
        cout << item << endl;
    }
}
