
// import <iostream>;
#include <iostream>

// import <format>;

// import employee;

using namespace std;


// export module employee;

// export struct Employee {
namespace HR {
	struct Employee {
		char firstInitial;
		char lastInitial;
		int  employeeNumber;
		int  salary;
	};
}


int main()
{
	// create and populate an employee
	HR::Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	// output the values of an employee
	// cout << format("Employee: {}{}", anEmployee.firstInitial, 
	// 	anEmployee.lastInitial) << endl;
	
    cout << "Employee: " << anEmployee.firstInitial << 
		anEmployee.lastInitial << endl;
	

    // cout << format("Number: {}", anEmployee.employeeNumber) << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
	
    // cout << format("Salary: ${}", anEmployee.salary) << endl;
    cout << "Salary: $" << anEmployee.salary << endl;
}
