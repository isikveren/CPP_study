#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

class Person
{
private:
    /* data */
    std::string name;
    std::string address;
public:
    Person(/* args */);
    ~Person();
    void show(){
        std::cout<<"姓名："<<this->name<<std::endl;
        std::cout<<"地址："<<this->address<<std::endl;
    }
};

Person::Person(/* args */)
{
    name = "liu";
    address = "liaoning university";
}

Person::~Person()
{
}

#endif
