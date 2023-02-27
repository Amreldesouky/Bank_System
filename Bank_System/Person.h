#include <iostream>
#include <string>
#include "Validation.h"

#pragma once

using namespace std;

class Person {
private:
    string name;
    int id;
    string password;

public:
    // constructor
    Person(string name = "N/A", int id = 0, string password = "N/A");
    // setters
    void setName(string name);
    void setId(int id);
    void setPassword(string password);
    // getters
    string getName();
    int getId();
    string getPassword();
    virtual void display() = 0;
};
