/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:26:59 by zbidouli          #+#    #+#             */
/*   Updated: 2023/04/26 00:27:01 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook() {
    this->_contactCount = 0;
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::addContact() {
    if (this->_contactCount < 8) {
        this->_contacts[this->_contactCount++] = add();
    } else {
        for (int i = 0; i < 7; i++) {
            this->_contacts[i] = this->_contacts[i + 1];
        }
        this->_contacts[7] = add();
    }
}

void PhoneBook::searchContact() {
    if (this->_contactCount > 0) {
        show(this->_contacts, this->_contactCount);
    } else {
        std::cout << "Phonebook is empty. :O" << std::endl;
    }
}

