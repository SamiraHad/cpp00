/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:17:36 by hsamira           #+#    #+#             */
/*   Updated: 2026/01/26 17:28:56 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define  PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        
        void addContact();
        void displayListContacts() const;
        void displayContact(int index) const;
        
        
    private:
        Contact _contacts[8];
        int _index;
};
#endif