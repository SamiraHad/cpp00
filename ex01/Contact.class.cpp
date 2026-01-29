@/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:17:12 by hsamira           #+#    #+#             */
/*   Updated: 2026/01/27 14:50:48 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
    _firstName = "";
    _lastName = "";
    _nickName = "";
    _phoneNumber = "";
    _darkestSecret = ""; 
}

Contact::~Contact()
{
    
}
void Contact::setFirstName(const std::string& firstName) {
    this->_firstName = firstName ;
}

void Contact::setLastName(const std::string& lastName) {
    this->_lastName = lastName;
}

void Contact::setNickName(const std::string& nickName) {
    this->_nickName = nickName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()const {
    return this-> _firstName;
}
std::string Contact::getLastName()const {
    return this-> _lastName;
}
std::string Contact::getNickName()const{
    return this-> _nickName;
}
std::string Contact::getPhoneNumber()const{
    return this-> _phoneNumber;
}
std::string Contact::getDarkestSecret()const{
    return this-> _darkestSecret;
}
