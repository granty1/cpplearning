//
//  object.hpp
//
//  Created by Grant on 2020/6/14.
//  Copyright © 2020 Grant. All rights reserved.
//

#ifndef object_hpp
#define object_hpp

#include <stdio.h>
#include <string>
namespace Object {
    class Person {

    public:
        std::string name;
        int age;

        Person(const std::string &name, int age);
        ~Person();
        const std::string getName();
        void setName(const std::string &name);
        int getAge() const;
        void setAge(int age);

        friend void resetName(Person person);

    private:
        void resetAge();
    };
}

#endif /* object_hpp */
