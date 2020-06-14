//
//  pointer.cpp
//  cpplearning
//
//  Created by Grant on 2020/6/14.
//  Copyright © 2020 Grant. All rights reserved.
//

#include "pointer.hpp"
#include "iostream"
using namespace std;

void pointreDesc() {
    cout << "Pointer:" << endl;
    int b[10];
    for (int i = 0 ; i < 10 ; i++) { 
        b[i] = 0;
    }
    int *address;
    int i = 0;
    for (auto & item : b) {
        if (i == 5) {
            address = &item;
             cout << "address:" << &item << ",value:" << item << endl;
        }
        i++;
    }
    
    cout << address << endl;
}
