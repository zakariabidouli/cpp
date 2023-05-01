/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:27:15 by zbidouli          #+#    #+#             */
/*   Updated: 2023/04/26 00:27:17 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


Contact::Contact(void) { return ; }
Contact::~Contact(void) { return ; }

std::string Contact::getFirstName(void)
{
    return (this->_firstName);
}

std::string Contact::getLastName(void)
{
    return (this->_lastName);
}

std::string Contact::getNickname(void)
{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->_darkestSecret);
}



void        Contact::setFirstName(std::string str)
{
    this->_firstName = str;
    return ;
}

void        Contact::setLastName(std::string str)
{
    this->_lastName = str;
    return ;
}

void        Contact::setNickname(std::string str)
{
    this->_nickname = str;
    return ;
}

void        Contact::setPhoneNumber(std::string str)
{
    for(int i = 0; i < 11; i++){
        if (str[i] < '0' || str[i] > '9'){
            std::cout << "Invalid phone number" << std::endl;
            return ;
        }
    }
    this->_phoneNumber = str;
    return ;
}

void        Contact::setDarkestSecret(std::string str)
{
    this->_darkestSecret = str;
    return ;
}

