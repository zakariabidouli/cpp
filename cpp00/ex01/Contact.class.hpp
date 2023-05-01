/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:27:11 by zbidouli          #+#    #+#             */
/*   Updated: 2023/04/26 00:27:13 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX = 8;
const int FIELD_WITDTH = 10;

class    Contact
{
private:
    std::string     _firstName;
    std::string     _lastName;
    std::string     _nickname;
    std::string     _phoneNumber;
    std::string     _darkestSecret;

public:
    Contact(void);
    ~Contact(void);
    void            setFirstName(std::string);
    void            setLastName(std::string);
    void            setNickname(std::string);
    void            setPhoneNumber(std::string);
    void            setDarkestSecret(std::string);
    std::string     getFirstName(void);
    std::string     getLastName(void);
    std::string     getNickname(void);
    std::string     getPhoneNumber(void);
    std::string     getDarkestSecret(void);

};

void    show(Contact phonebook[], int nbr_contacts);
Contact add(void);

#endif
