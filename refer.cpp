//
//  refer.cpp
//  cpplearning
//
//  Created by Grant on 2020/6/14.
//  Copyright © 2020 Grant. All rights reserved.
//

#include "refer.hpp"
#include "iostream"
using namespace std;

double values[] = {10.1, 5.2 ,6,3};
double getValue(int index);

void swap(int *a, int *b);

void referDesc() {
    int a = 1, b = 2;
    swap(a, b);
    cout << a << b << endl;
    
    cout << getValue(10) << endl;
}


void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

double getValue(int index){
    if (values[index] == 0) {
        cout << "index out of range!" << endl;
        return 0;
    }
    return values[index];
}
