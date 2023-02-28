#include "Person.h"

// constructor
Person::Person(string name , int id , string password) {
    setName(name);
    setId(id);
    setPassword(password);
}

// setters
void Person:: setName(string name) {
    if (Validation::validateName(name)) {
        this->name = name;
    }
    else {
        cout << "Name is invalid." << endl;
    }
}

void Person:: setId(int id) {
    this->id = id;
}

void Person:: setPassword(string password) {
    if (Validation::validatePassword(password)) {
        this->password = password;
    }
    else {
        cout << "Password is invalid." << endl;
    }
}

// getters
string Person:: getName() {

    return this->name;
}

int Person:: getId() {
    return this->id;
}

string Person:: getPassword() {
    return this->password;
}

