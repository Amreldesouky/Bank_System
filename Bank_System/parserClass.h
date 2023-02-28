
#ifndef EBRAHIM_ELNAGHY_PARSERCLASS_H
#define EBRAHIM_ELNAGHY_PARSERCLASS_H
#include <iostream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#pragma once
using namespace std;

class Parser {
public:
    Employee employee;
    static vector<string> split(string line);
    static Client parseToClient(string line);
    static Employee parseToEmployee(string line);
    static Admin parseToAdmin(string line);

};
#endif //EBRAHIM_ELNAGHY_PARSERCLASS_H
