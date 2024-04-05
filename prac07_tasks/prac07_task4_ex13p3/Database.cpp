#include "Database.h"
#include <fstream>
#include <vector>

void Database::add(Person person) {
    m_persons.push_back(person);
}

void Database::clear() {
    m_persons.clear();
}

void Database::save(std::string_view filename) const {
    std::ofstream file(filename.data());
    if (!file.is_open()) {
        std::cout << "Error: Unable to open file " << filename << " for writing." << std::endl;
        return;
    }
    
    for (const Person& person : m_persons) {
        file << person.getFirstName() << " "
             << person.getLastName() << " ,"
             << person.getInitials() << std::endl;
    }
    
    file.close();
}

void Database::load(std::string_view filename) {
    std::ifstream file(filename.data());
    if (!file.is_open()) {
        std::cout << "Error: Unable to open file " << filename << " for reading." << std::endl;
        return;
    }
    
    clear(); // Clear existing data before loading
    
    std::string firstName, lastName, initials;
    while (file >> firstName) {
        // Read the last name until encountering the comma
        std::getline(file, lastName, ',');
        // Remove leading and trailing whitespace from lastName
        lastName.erase(lastName.find_last_not_of(" \n\r\t") + 1); // Remove trailing whitespace
        
        // Read initials
        file >> initials;
        
        // Create and add the person to the database
        Person person(firstName, lastName, initials);
        add(person);
    }
    
    file.close();
}
// void Database::outputAll(std::ostream& output) const {
//     for (const Person& person : m_persons) {
//         output << person << std::endl;
//     }
// }

const std::vector<Person> &Database::getPersons() const
{
    return m_persons;
}

std::ostream &operator << (std::ostream& os, const Database& db)
{
    for (const auto& person : db.getPersons ()) {

        os << person << std::endl;
    }
    return os;
}

