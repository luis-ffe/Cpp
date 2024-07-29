#include "master_header.hpp"

void ft_add_all(Phonebook *phonebook, int n){
    std::string UserName, LastName, id, PhoneNumber, Notes;

    std::cout << "Enter First Name: ";
    std::getline(std::cin, UserName);
    if (std::cin.eof()) return;

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, LastName);
    if (std::cin.eof()) return;

    std::cout << "Enter USER ID: ";
    std::getline(std::cin, id);
    if (std::cin.eof()) return;

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, PhoneNumber);
    if (std::cin.eof()) return;

    std::cout << "Enter Notes: ";
    std::getline(std::cin, Notes);
    if (std::cin.eof()) return;

    phonebook->AddNewContact(n, UserName, LastName, id, PhoneNumber, Notes);
    std::cout << "Successfully added.\n";
}

void ft_search(Phonebook *phonebook, int n){
    if (n == 0) {
        std::cout << "No contacts found.\n";
        return;
    }
}