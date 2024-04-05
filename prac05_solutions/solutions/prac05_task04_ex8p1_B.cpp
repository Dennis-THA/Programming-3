// #include <cstddef>
// import <iostream>;
#include <iostream>

using namespace std;


class Person {
	public:
		Person(string firstName, string lastName) {
			this->firstName = firstName;
			this->lastName = lastName;
		}
		void setFirstName(string firstName) {this->firstName = firstName;}
		string getFirstName() {return firstName;}
		void setLastName(string lastName) {this->lastName = lastName;}
		string getLastName() {return lastName;}
	private:
		string firstName;  // textbook likes m_firstName
		string lastName;

};


int main()
{
	// The following does not compile!!! Why?
	// Person person;  // on the stack
	// Person* ptrPerson = new Person();

	Person person{"myFirstName2", "myLastName2"};  // on the stack
	Person* ptrPerson = new Person("myFirstName3", "myLastName3");

	// person.setFirstName("myFirstName");
	// person.setLastName("myLastName");
	// ptrPerson->setFirstName("myFirstName on FreeStore");
	// ptrPerson->setLastName("myLastName on FreeStore");

	cout << person.getFirstName() << " " << person.getLastName() << endl;
	cout << ptrPerson->getFirstName() << " " << ptrPerson->getLastName() << endl;

}
