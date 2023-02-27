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


int main() {
	Admin c1("ahmed",10 , "Aa123456@" );
	
	c1.display();
}
