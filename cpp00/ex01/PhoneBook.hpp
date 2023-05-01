/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:26:56 by zbidouli          #+#    #+#             */
/*   Updated: 2023/04/26 00:26:58 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.class.hpp"

class PhoneBook {
    private:
        Contact _contacts[8];
        int _contactCount;
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
        void searchContact();
};

#endif