//
//  object.cpp
//
//  Created by Grant on 2020/6/14.
//  Copyright © 2020 Grant. All rights reserved.
//

#include "object.hpp"
#include <iostream>

const std::string Object::Person::getName()  {
    return name;
}

void Object::Person::setName(const std::string &name) {
    Person::name = name;
}

int Object::Person::getAge() const {
    return age;
}

void Object::Person::setAge(int age) {
    Person::age = age;
}

void Object::Person::resetAge() {
    age = 20;
}

Object::Person::Person(const std::string &name, int age) : name(name), age(age) {}

Object::Person::~Person() {
    std::cout << "Person is being deleted" << std::endl;
}

void Object::resetName(Object::Person person) {
    person.name = "Default";
}



