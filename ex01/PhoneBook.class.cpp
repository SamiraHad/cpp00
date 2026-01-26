/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:17:26 by hsamira           #+#    #+#             */
/*   Updated: 2026/01/26 17:25:26 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// _contacts[_index].setFirstName(input):j’envoie input à la fonction
//setFirstName du contact numéro _index.

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() : _index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
    std::string input;
    while (input.empty())
    {
        std::cout << "First Name: ";
        std::getline(std::cin, input);
    }
    _contacts[_index].setFirstName(input);
    input.clear();
    
    while (input.empty())
    {
        std::cout << "Name :";
        std::getline(std::cin, input);
    }
    _contacts[_index].setName(input);
    input.clear();
    
     while (input.empty())
    {
        std::cout << "Nick Name: ";
        std::getline(std::cin, input);
    }
    _contacts[_index].setNickName(input);
    input.clear();
    
     while (input.empty())
    {
        std::cout << "Phone Number: ";
        std::getline(std::cin, input);
    }
    _contacts[_index].setPhoneNumber(input);
    input.clear();

     while (input.empty())
    {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, input);
    }
    _contacts[_index].setDarkestSecret(input);
    input.clear();

    _index++;
    if(_index == 8)
        _index = 0;
    
}

void PhoneBook::displayListContacts() const
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::string value;
    for(int i = 0; i < 8; i++)
    {
        if(_contacts[i].getFirstName().empty())
            continue;
        
        std::cout << "|";
        std::cout << std::setw(10) << i + 1 << "|";
        value =_contacts[i].getFirstName();
        if(value.length() > 10)
            value = value.substr(0, 9) + ".";
        std::cout << std::setw(10) << value << "|";
        
        value = _contacts[i].getName();
        if(value.length() > 10)
            value = value.substr(0, 9) + ".";
        std::cout << std::setw(10) << value << "|";
        
        value =_contacts[i].getNickName();
        if(value.length() > 10)
            value = value.substr(0, 9) + ".";
         std::cout << std::setw(10) << value << "|" << std::endl;
    }
}

void PhoneBook::displayContact(int index) const
{
    if(index < 1 || index > 8)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    const Contact& contact = _contacts[index - 1];
    if(contact.getFirstName().empty())
    {
        std::cout << "Contact not found." << std::endl;
        return;
    }
    std::cout << "First name: " << contact.getFirstName() << std::endl;
    std::cout << "Name: " << contact.getName() << std::endl;
    std::cout << "Nickname: " << contact.getNickName() << std::endl;
    std::cout << "Phonenumber: " << contact.getPhoneNumber() << std::endl;
    std::cout << "DarkestSecret: " << contact.getDarkestSecret() << std::endl;
}