//
//  stirng.cpp
//  cpplearning
//
//  Created by Grant on 2020/6/14.
//  Copyright © 2020 Grant. All rights reserved.
//

#include "stirng.hpp"
#include "iostream"
#include "cstring"
using namespace std;

void stringDesc() {
    cout << "String:" << endl;
    char src[5] = "123u";
    char tar[5];
    strcpy(tar, src);
    string str = (string)tar;
    cout << tar << endl;
    cout << "string:" << str << ",size:" << str.size() << endl;
}
