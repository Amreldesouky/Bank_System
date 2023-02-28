#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "Validation.h"
using namespace std;
// DataSourceInterface abstract class
class DataSourceInterface
{

   public:
	      virtual void addClient(Client clint) = 0;

		  virtual void addEmployee(Employee employee) = 0;

		  virtual vector<Employee>getAllEmployees() = 0;

		  virtual vector<Admin> getAllAdmins() = 0;

		  virtual void removeAllClients() = 0;

		  virtual void removeAllEmployees() = 0;

		  virtual void removeAllAdmins() = 0;

};