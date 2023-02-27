#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"
#pragma once

using namespace std;

class Client : public Person {
private:
    double balance;
    double salary;
public:

    // constructor
    Client(string name, int id, string password, double balance = 1500 ) : Person(name, id, password) {
        setBalance(balance);
    }
    // setters and getters
    void setBalance(double balance);
    double getBalance();
    void setSalary(double salary);
    double getSalary();
    

    //Methods
    // deposit
    void deposit(double amount);
    // withdraw
    void withdraw(double amount);
    // check balance
    void checkBalance();
    // transfer money to another client
    void transfer(Client& other, double amount);
    // display Client info
    void display();
    // Add Client
    void addClient(Client& client);
    // search for a client with id
    Client* searchClient(int id);
    // display the list of clients
    void listClient();
    // display the list of clients
    void listClient();
    // edit clients
    void editClient(int id, string name, string password, double balance);

};