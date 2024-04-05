
// import <iostream>;
#include <iostream>

using namespace std;


namespace HR {

	enum class Title {
		Engineer,
		SeniorEngineer,
		Manager
	};

	struct Employee {
		char firstInitial;
		char lastInitial;
		int  employeeNumber;
		int  salary;
		Title title;
	};
}

void print_title(HR::Title t);


int main()
{

	HR::Employee anEmployee{'J', 'D', 42, 8000, HR::Title::Manager};

    cout << "Employee: " << anEmployee.firstInitial << 
		anEmployee.lastInitial << endl;
	

    cout << "Number: " << anEmployee.employeeNumber << endl;
	

    cout << "Salary: $" << anEmployee.salary << endl;

	print_title(anEmployee.title);

}

void print_title(HR::Title t) {
	switch (t) {
	using namespace HR;
	case Title::Engineer:
		cout << "Engineer" << endl;
		break;
	case Title::SeniorEngineer:
		cout << "SeniorEngineer" << endl;
		break;
	case Title::Manager:
		cout << "Manager" << endl;
		break;
	}
}
