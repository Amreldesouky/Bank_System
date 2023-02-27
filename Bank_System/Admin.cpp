#include "Admin.h"
#include<fstream>

// For adding and searching about clients
vector<Client> clients;

//Methods
void Admin::addClient(Client& client) {
    clients.push_back(client);
}

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

vector <Employee> employees;
void Admin::addEmployee(Employee& employee)
{
    employees.push_back(employee);
}

Employee* Admin::searchEmployee(int id)
{
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].getId() == id)
        {
            return &employees[i];
        }
    }
    return nullptr;
}

void Admin::editEmployee(int id, string name, string password, double salary)
{
    // search for an employee with the given id
    Employee* employee = searchEmployee(id);
    if (employee) {

        employee->setName(name);
        employee->setPassword(password);
        employee->setSalary(salary);
    }
}

// display the list of employees
void listEmployee()
{
    cout << "List of Employees: " << endl;
    for (int i = 0; i < employees.size(); i++)
    {
        cout << "Name: " << employees[i].getName() << ", ID: " << employees[i].getId() << ", Salary: " << employees[i].getSalary() << endl;
    }
}

void Admin:: display() {
    cout << "Name: " << getName() << endl;
    cout << "Id: " << getId() << endl;
    cout << "Salary: " << getSalary() << endl;
}
