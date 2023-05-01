/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:26:51 by zbidouli          #+#    #+#             */
/*   Updated: 2023/04/26 00:26:54 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact add(void)
{
    Contact     new_contact;
    std::string buffer;

    std::cout << "First name : ";
    std::cin >> buffer;
    new_contact.setFirstName(buffer);
    std::cout << "Last name : ";
    std::cin >> buffer;
    new_contact.setLastName(buffer);
    std::cout << "Nick name : ";
    std::cin >> buffer;
    new_contact.setNickname(buffer);
    std::cout << "Phone Number : ";
    std::cin >> buffer;
    new_contact.setPhoneNumber(buffer);
    std::cout << "DarkestSecret : ";
    std::cin >> buffer;
    new_contact.setDarkestSecret(buffer);

    return (new_contact);
}

static void
searchContact(Contact phonebook[], int nbr_contacts)
{
    int          index;

    std::cout << "Enter the index of a contact: ";
    std::cin >> index;
    std::cout << std::endl;
    if (std::cin.good() && (index >= 0 && index < nbr_contacts))
    {
        std::cout << phonebook[index].getFirstName() << std::endl;
        std::cout << phonebook[index].getLastName() << std::endl;
        std::cout << phonebook[index].getNickname() << std::endl;
        std::cout << phonebook[index].getPhoneNumber() << std::endl;
        std::cout << phonebook[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Sorry, that contact cannot be found. :(" << std::endl;
    }
}


static std::string
truncateContact(std::string field)
{
    field = field.erase((FIELD_WITDTH - 1), \
    field.length() - (FIELD_WITDTH - 1));
    field.append(".");
    return (field);
}


void    show(Contact phonebook[], int nbr_contacts)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << std::setw(FIELD_WITDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < nbr_contacts; i += 1)
    {
        if(std::cin.eof())
            exit(0);
        first_name = phonebook[i].getFirstName();
        last_name = phonebook[i].getLastName();
        nickname = phonebook[i].getNickname();

        std::cout << "|" << std::setw(FIELD_WITDTH) << i;
        first_name = (first_name.length() > FIELD_WITDTH) ? \
            truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << first_name;

        last_name = (last_name.length() > FIELD_WITDTH) ? \
            truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << last_name;

        nickname = (nickname.length() > FIELD_WITDTH) ? \
            truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(FIELD_WITDTH) << nickname;
        std::cout << "|" << std::endl;
    }
    searchContact(phonebook, nbr_contacts);
}