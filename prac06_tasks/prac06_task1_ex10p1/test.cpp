#include <iostream>
#include "HR.h"

using namespace std;

int main()
{
    HR::Person person{"John", "Wick"};
    cout << person.getFirstName() << endl;
    cout << person.getLastName() << endl;
    cout << person.getInitials() << endl;
	cout << std::string(person) << endl;
	cout << "------------------ " << endl;

    HR::Employee employee(123, "Will", "Smith");
    cout << employee.getID() << endl;
    cout << employee.getFirstName() << endl;
    cout << employee.getLastName() << endl;
    cout << employee.getInitials() << endl;
	cout << std::string(employee) << endl;
	cout << "------------------ " << endl;

	HR::Director director(456, "Steve", "Rogers");
    cout << director.getID() << endl;
    cout << director.getFirstName() << endl;
    cout << director.getLastName() << endl;
    cout << director.getInitials() << endl;
	cout << std::string(director) << endl;
	cout << "------------------ " << endl;

	HR::Manager manager(789, "Tony", "Stark");
    cout << manager.getID() << endl;
    cout << manager.getFirstName() << endl;
    cout << manager.getLastName() << endl;
    cout << manager.getInitials() << endl;
	cout << std::string(manager) << endl;
	cout << "------------------ " << endl;

    
	vector<HR::Person*> staff;
	staff.push_back(&person);
	staff.push_back(&employee);
	staff.push_back(&manager);
	staff.push_back(&director);

	for (const HR::Person* person : staff) {
		cout << std::string(*person) << endl;
	}

    return 0;
}
