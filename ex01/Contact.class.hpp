/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:17:18 by hsamira           #+#    #+#             */
/*   Updated: 2026/01/27 14:52:00 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H 

#include <iostream>
#include <string>

class Contact
{
    public:
        Contact();
        ~Contact();
        
        void setFirstName(const std::string& firstName);
        void setLastName(const std::string& lastName);
        void setNickName(const std::string& nickName);
        void setPhoneNumber(const std::string& phoneNumber);
        void setDarkestSecret(const std::string& darkestSecret);

        std::string getFirstName()const;
        std::string getLastName()const;
        std::string getNickName()const;
        std::string getPhoneNumber()const;
        std::string getDarkestSecret()const;


    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
};

#endif
