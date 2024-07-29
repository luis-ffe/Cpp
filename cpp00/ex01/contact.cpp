
#include "master_header.hpp"

PhoneContact::PhoneContact(){  
}

PhoneContact::~PhoneContact(){ 
}

void PhoneContact::SetValuesOrdered(std::string name, std::string last, std::string idn, std::string numb, std::string note){
    UserName = name;
    LastName = last;
    id = idn;
    PhoneNumber = numb;
    Notes = note;
}

void PhoneContact::PrintPhoneContact(void) const{
	std::cout << "Name: " << this->UserName << std::endl;
	std::cout << "Surname: " << this->LastName << std::endl;
	std::cout << "ID: " << this->id << std::endl;
	std::cout << "Phone Number: " << this->PhoneNumber << std::endl;
	std::cout << "Notes " << this->Notes << std::endl;
}