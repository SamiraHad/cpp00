/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:46:03 by hsamira           #+#    #+#             */
/*   Updated: 2026/01/30 10:08:02 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"     

int main ()
{
    PhoneBook phoneBook;
    std::string input;
    std::string indexstr;
    int index = 0;
    
    while(1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if(input == "ADD"  || input == "add")
            phoneBook.addContact();
        else if(input == "SEARCH" || input == "search")
        {
            phoneBook.displayListContacts();
            std::cout << "Enter index please: ";
            std::getline(std::cin, indexstr);
            index = std::atoi(indexstr.c_str());
            phoneBook.displayContact(index);
        }
        else if (input == "EXIT" || input == "exit")
            break;
        else
           std::cout << "Please enter a valid command: " << std::endl; 
        if (std::cin.eof())
            return 1;
    }
    return(0);
}
