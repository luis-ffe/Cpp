/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:52:02 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/07/22 14:25:04 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master_header.hpp"

void Phonebook::AddNewContact(int n, std::string UserName, std::string LastName, std::string id, std::string PhoneNumber, std::string Notes){
	phonebook[n].SetValuesOrdered(UserName, LastName, id, PhoneNumber, Notes);
}

Phonebook::Phonebook(){
}

Phonebook::~Phonebook(){
}

PhoneContact Phonebook::get_contact(int n){
	return(phonebook[n]);
}

std::string Phonebook::fetch_UserName(int n){
	return(phonebook[n].fetch_UserName());
}

std::string Phonebook::fetch_LastName(int n){
	return(phonebook[n].fetch_LastName());
}

std::string Phonebook::fetch_id(int n){
	return(phonebook[n].fetch_id());
}

std::string Phonebook::fetch_PhoneNumber(int n){
	return(phonebook[n].fetch_PhoneNumber());
}

std::string Phonebook::fetch_notes(int n){
	return(phonebook[n].fetch_notes());
}