/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:27:07 by zbidouli          #+#    #+#             */
/*   Updated: 2023/04/26 00:27:09 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.hpp"

/*
** Shows the menu with the available commands.
*/

static void
menu(void)
{
	std::cout << "A poor excuse of a phonebook ;)" << std::endl;
    std::cout << " ____ _  _  __  __ _ ____ ____  __   __ __ _ \n";
    std::cout << "(  _ / )( \\/  \\(  ( (  __(  _ \\/  \\ /  (  / )\n";
    std::cout << " ) __) __ (  O /    /) _) ) _ (  O (  O )  ( \n";
    std::cout << "(__) \\_)(_/\\__/\\_)__(____(____/\\__/ \\__(__\\_)\n";
    std::cout << std::endl;
    std::cout << "Available commands:" << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
    std::cout << std::endl;
}

int main(void){
    int             contact_index;
    PhoneBook       phonebook;
    std::string     command;

    menu();
    contact_index = 0;
    while (1){
        getline(std::cin, command, '\n');
        if(std::cin.eof())
            exit(0);
        if (command == "ADD")
           phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break ;
        else
            std::cout << "Enter : ADD | SEARCH | EXIT" << std::endl;
    }
    return (0);
}