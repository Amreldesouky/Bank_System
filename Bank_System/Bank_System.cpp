#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <fstream>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "Validation.h"
#include "parserClass.h"
#include "filesHelper.cpp"
using namespace std;

int main() {
//	Admin c1("ahmed",10 , "Aa123456@" );
//    c1.display();


        Client c1("Ibrahim Elnaghy", 11, "543hgbf", 2500);
        FilesHelper::saveClient(c1);


        Employee e1("Mostafa Hashem", 19, "123dfs", 4000);
        FilesHelper::saveEmployee("employees.txt", "employees_id.txt", e1);


        cout << "All clients:" << endl;
        FilesHelper::getClients();
        cout << "All employees:" << endl;
        FilesHelper::getEmployees();


        FilesHelper::clearFile("employees.txt", "employees_id.txt");


        cout << "All employees after clearing the file:" << endl;
        FilesHelper::getEmployees();
}
