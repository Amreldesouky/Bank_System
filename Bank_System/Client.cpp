#include "Client.h"



// setters and getters
void Client:: setBalance(double balance) 
{
    if (Validation::validateClientBalance(balance)) 
    {
        this->balance = balance;
    }
    else {
        cout << "Client balance is insufficient. The minimum balance required is 1500." << endl;
    }
}
double Client:: getBalance()
{
    return this->balance;
}
void Client:: setSalary(double salary)
{
    this->salary = salary;
}
double Client::getSalary()
{
    return this->salary;
}

//Methods

// deposit
void Client:: deposit(double amount) 
{
    this->balance += amount;
    cout << "Deposit successful. New balance is: " << getBalance() << endl;
}

// withdraw
void Client:: withdraw(double amount) 
{
    if (this->balance >= amount) 
    {
        this->balance -= amount;
        cout << "Withdrawal successful. New balance is: " << getBalance() << endl;
    }
    else 
    {
        cout << "Withdrawal failed. Insufficient balance." << endl;
    }
}

// check balance
void Client:: checkBalance() 
{
    cout << "Balance: " << getBalance() << endl;
}

// transfer money to another client
void Client:: transfer(Client& other, double amount) 
{
    if (this->balance >= amount) 
    {
        this->balance -= amount;
        other.balance += amount;
        cout << "Transfer successful. New balance is: " << getBalance() << endl;
    }
    else 
    {
        cout << "Transfer failed. Insufficient balance." << endl;
    }
}
// For adding and searching about clients
vector<Client> clients;

// Add new Client
void addClient(Client& client)
{
    clients.push_back(client);
}

Client* searchClient(int id) 
{
    for (int i = 0; i < clients.size(); i++) 
    {
        if (clients[i].getId() == id) 
        {
            return &clients[i];
        }
    }
    return nullptr;
}

// display the list of clients
void listClient() 
{
    cout << "List of clients: " << endl;
    for (int i = 0; i < clients.size(); i++)
    {
        cout << "Name: " << clients[i].getName() << ", ID: " << clients[i].getId() << ", Balance: " << clients[i].getBalance() << endl;
    }
}

// edit a clients
void editClient(int id, string name, string password, double balance)
{
    for (int i = 0; i < clients.size(); i++)
    {
        if (clients[i].getId() == id)
        {
            clients[i].setName(name);
            clients[i].setPassword(password);
            clients[i].setBalance(balance);
            return;
        }
    }
    cout << "Client not found" << endl;
}


// display Client info
void Client:: display() 
{
    cout << "Name: " << getName() << endl;
    cout << "Id: " << getId() << endl;
    cout << "Balance: " << getBalance() << endl;
}
